#pragma once
#include <string>
#include <vector>

// Define a structure "Task" to represent tasks with a description and a "done" flag.
struct Task
{
	std::string description;
	bool done;
};

// Function declaration for saving tasks to a file.
void saveTaskToFile(const std::vector<Task>& tasks, const std::string& fileName);

// Function declaration for loading tasks from a file.
std::vector<Task> loadTaskFromFile(const std::string& fileName);
