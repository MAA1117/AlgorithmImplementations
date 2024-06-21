#pragma once

#include <iostream>
#include <chrono>
#include <exception>

class Stopwatch
{
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimePoint;
    bool m_IsStopped;

public:
    Stopwatch()
        : m_StartTimePoint(std::chrono::high_resolution_clock::now()), m_IsStopped(false)
    {
    }

    ~Stopwatch()
    {
        if (!m_IsStopped)
        {
            Stop();
        }
    }

    void Stop()
    {
        try
        {
            auto endTimePoint = std::chrono::high_resolution_clock::now();
            auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimePoint).time_since_epoch().count();
            auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimePoint).time_since_epoch().count();

            auto duration = end - start;
            double ms = duration * 0.001;

            std::cout << "[" << duration << "us (" << ms << "ms)]\n";
            m_IsStopped = true;
        }
        catch (const std::exception& e)
        {
            std::cerr << "Timer Stop Failed: " << e.what() << std::endl;
        }
    }

    void Reset()
    {
        m_StartTimePoint = std::chrono::high_resolution_clock::now();
        m_IsStopped = false;
    }
};
