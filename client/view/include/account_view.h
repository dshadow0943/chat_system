//
// Created by lei-long on 2020/12/22.
//

#ifndef CHAT_SYSTEM_ACCOUNT_VIEW_H
#define CHAT_SYSTEM_ACCOUNT_VIEW_H

#include "../../include/view.h"

int account_view_login();

int account_view_register();

int account_view_nu_login();

void account_view_success();

void account_view_failed(char* buf);

#endif //CHAT_SYSTEM_ACCOUNT_VIEW_H
