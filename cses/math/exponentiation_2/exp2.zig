const std = @import("std");
const io = std.io;
const math = std.math;

const MOD: i64 = 1000000007;

fn power(a: i64, b: i64, p: i64) i64 {
    var res: i64 = 1;
    var a_var = a;
    var b_var = b;
    while (b_var > 0) : (b_var >>= 1) {
        if (b_var & 1 != 0) {
            res = uncheckedMulMod(res, a_var, p);
        }
        a_var = uncheckedMulMod(a_var, a_var, p);
    }
    return res;
}

fn uncheckedMulMod(a: i64, b: i64, p: i64) i64 {
    return math.mod(i64, a * b, p);
}

pub fn main() !void {
    const stdout = io.getStdOut().writer();
    var stdin = io.getStdIn().reader();
    var buffer: [100]u8 = undefined;

    // Read the first line for the number of test cases
    const line = try stdin.readUntilDelimiterOrEof(&buffer, '\n');
    if (line) |l| {
        const n: usize = std.fmt.parseInt(usize, l, 10) catch 0;

        // Loop through each test case
        for (std.mem.repeat(u8, 0, n)) |_| {
            const line = try stdin.readUntilDelimiterOrEof(&buffer, '\n');
            if (line) |l| {
                var iter = std.mem.split(l, " ");
                const a = std.fmt.parseInt(i64, iter.next().?, 10) catch 0;
                const b = std.fmt.parseInt(i64, iter.next().?, 10) catch 0;
                const c = std.fmt.parseInt(i64, iter.next().?, 10) catch 0;

                const ans = power(a, power(b, c, MOD - 1), MOD);
                try stdout.print("{}\n", .{ans});
            }
        }
    }
}
