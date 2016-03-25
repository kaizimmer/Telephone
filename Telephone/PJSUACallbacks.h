//
//  PJSUACallbacks.h
//  Telephone
//
//  Copyright (c) 2008-2016 Alexey Kuznetsov
//
//  Telephone is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Telephone is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//

#import <pjsua-lib/pjsua.h>

void PJSUAOnIncomingCall(pjsua_acc_id, pjsua_call_id, pjsip_rx_data *);
void PJSUAOnCallState(pjsua_call_id, pjsip_event *);
void PJSUAOnCallMediaState(pjsua_call_id);
void PJSUAOnCallTransferStatus(pjsua_call_id callIdentifier,
                                    int statusCode,
                                    const pj_str_t *statusText,
                                    pj_bool_t isFinal,
                                    pj_bool_t *pCont);
void PJSUAOnCallReplaced(pjsua_call_id oldCallIdentifier, pjsua_call_id newCallIdentifier);
void PJSUAOnCallRegistrationState(pjsua_acc_id accountIdentifier);
void PJSUAOnNATDetect(const pj_stun_nat_detect_result *result);