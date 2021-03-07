//
// Created by Artem Murashko on 07.03.2021.
//

#ifndef PSS_HW2_ACCESS_H
#define PSS_HW2_ACCESS_H

/*
 * The numbers represent the hierarchy of levels.
 * The larger the number, the more access.
 */

enum class Access {
    no_level = 0,
    green = 1,
    yellow = 2,
    red = 3
};

#endif //PSS_HW2_ACCESS_H
