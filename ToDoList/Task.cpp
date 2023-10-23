#include "Task.h"
#include <string>
#include <vector>
#include <filesystem>
#include <fstream>
#include <algorithm>

// Function to save tasks to a file.
void SaveTaskToFile(const std::vector<Task>& tasks, const std::string& fileName)
{
	std::ofstream ostream(fileName);
	ostream << tasks.size();

	// Loop through the tasks in the vector and save them to the file.
	for (const Task& task : tasks) {
		std::string description = task.description;
		std::replace(description.begin(), description.end(), ' ', '_');

		ostream << '\n' << description << ' ' << task.done;
	}

}
// Function to load tasks from a file.
std::vector<Task> LoadTaskFromFile(const std::string& fileName)
{
	if (!std::filesystem::exists(fileName)) {
		return std::vector<Task>();
	}

	std::vector<Task> tasks;
	std::ifstream istream(fileName);

	int n;
	istream >> n;

	// Loop through the tasks and load them from the file.
	for (int i = 0; i < n; i++) {
		std::string description;
		bool done;

		istream >> description >> done;
		std::replace(description.begin(), description.end(), '_', ' ');
		tasks.push_back(Task{ description, done });
	}

	return tasks;
}
