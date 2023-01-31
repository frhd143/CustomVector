#include <iostream>
#include "Vector.hpp"

/*
 *  Feel free to test your the  Vector through this file and compile the target
 *  'application'.
 */

int main()
{
    // ---------------------------------------- //
    // ------- Example: Push and insert ------- //
    // ---------------------------------------- //

    // {
    //     Vector<std::string> myVector;

    //     myVector.push_back("Hello");
    //     myVector.insert(1, "world");

    //     for (int i = 0; i < myVector.size(); i++) {
    //         std::cout << myVector[i] << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // ---------------------------------------- //
    // ----- Example: Using custom struct ----- //
    // ---------------------------------------- //

    // {
    //     struct TextEditor
    //     {
    //         std::string Name;
    //         int Grade;
    //     }

    //     Vector<TextEditor> myVector;

    //     myVector.push_back({"Notepad++", 5});
    //     myVector.push_back({"VS Code", 8});
    //     myVector.push_back({"VIM", 10});

    //     for (int i = 0; i < myVector.size(); i++) {
    //         TextEditor& editor = myVector[i];
    //         std::cout << "Editor:\t" << editor.Name << "\t"
    //             << editor.Grade << "/10" << std::endl;
    //     }
    //     std::cout << std::endl;
    // }

    // // ---------------------------------------- //
    // // ---------- Example: 2D vector ---------- //
    // // ---------------------------------------- //

    // {
    //     Vector<Vector<int>> nestedVector;

    //     for (int i = 10; i < 20; i++)
    //     {
    //         Vector<float> subVector;
    //         for (int j = 0; j < 10; j++)
    //         {
    //             subVector.push_back(i + j);
    //         }

    //         nestedVector.push_back(subVector);
    //     }
    // }

    return 0;
}
