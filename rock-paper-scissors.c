/*
  *  Copyright | 2021 | Gavin Nesmith
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
 * 
*/

//includes
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum
{
    false,
    true
} bool;

int main(void)
{
    /// body of the program
    printf("++++++++++++++ Rock/paper/scissors +++++++++++++++++++\n");
    printf("++++++++++++++++ By: Gavin Nesmith +++++++++++++++++++\n");
    int metotal = 0, comptotal = 0;
    while (true)
    {
        short me, computer = 1 + rand() % 3;

        if (comptotal >= 3)
        {
            printf("The computer has won!");
            return 0;
        }
        else if (metotal >= 3)
        {
            printf("You Have Won");
            return 0;
        }

        printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("1 - Rock\n3 - Paper\n2 - Scissors\n> ");
        scanf("%hd", &me);
        printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");

        if (computer == me)
        {
            printf("++ Draw ++ \n");
        }
        else
        {

            switch (me)
            {
            case 1:
                if (computer == 2)
                {
                    printf("++ You Win ++\n");
                    metotal = metotal + 1;
                }
                else
                {
                    printf("++ You lost ++\n");
                    comptotal = comptotal + 1;
                }

                break;
            case 2:
                if (computer == 3)
                {
                    printf("++ You Win ++\n");
                    metotal = metotal + 1;
                }
                else
                {
                    printf("++ You lost ++\n");
                    comptotal = comptotal + 1;
                }
                break;
            case 3:
                if (computer == 1)
                {
                    printf("++ You Win ++\n");
                    metotal = metotal + 1;
                }
                else
                {
                    printf("++ You lost ++\n");
                    comptotal = comptotal + 1;
                }
                break;
            default:
                printf("option not defined! The system will now exit");
                return 0; //option not defined
                break;
            }
        }
    }

    return 0;
}
