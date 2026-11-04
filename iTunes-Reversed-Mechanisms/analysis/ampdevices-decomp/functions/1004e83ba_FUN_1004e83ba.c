// name: FUN_1004e83ba
// address: 1004e83ba

undefined1 FUN_1004e83ba(long param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined2 local_28 [8];
  
  if (*(char *)(DAT_1008c76a0 + 0x1a90) == '\0') {
    if (((*(char *)(DAT_1008c76a0 + 0x1a91) == '\0') || (*(char *)(param_1 + 0x6afa) != '\0')) &&
       (*(char *)(DAT_1008c76a0 + 0x1a93) == '\0')) {
      if (*(char *)(param_1 + 0x14cd8) == '\0') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 == '\0') {
          return 0;
        }
        pcVar3 = "sync> not syncing because device is not configured";
      }
      else {
        if (*(char *)(param_1 + 0x6af2) == '\0') {
          if (*(char *)(param_1 + 0x3a2) != '\0') {
            if (*(char *)(param_1 + 0x16847) != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar4 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 == '\0') {
                return 0;
              }
              pcVar3 = 
              "sync> not syncing because device is not compatible with this version of iTunes";
              goto LAB_1004e8475;
            }
            if (*(char *)(param_1 + 0x16842) == '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar4 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 == '\0') {
                return 0;
              }
              pcVar3 = "sync> not syncing because syncing is not currently allowed by AirTraffic";
              goto LAB_1004e8475;
            }
            cVar1 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
            if ((cVar1 != '\0') && (cVar1 = FUN_1001eba08(), cVar1 != '\0')) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar4 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 == '\0') {
                return 0;
              }
              pcVar3 = "sync> not syncing via Wi-Fi because host is running on battery power";
              goto LAB_1004e8475;
            }
          }
          if (*(char *)(param_1 + 0x6aee) == '\0') {
            if (*(char *)(param_1 + 0x6aef) == '\0') {
              cVar1 = FUN_100266bdc(*(undefined8 *)(param_1 + 0x66d8));
              if ((cVar1 != '\0') && (*(char *)(param_1 + 0x3a2) != '\0')) {
                cVar1 = FUN_1001ce7ad(&cf_com_apple_BookProofer,0);
                if (cVar1 != '\0') {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar4 = DAT_1008c75b8;
                  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar1 == '\0') {
                    return 0;
                  }
                  pcVar3 = "sync> not syncing because Book Proofer is running";
                  goto LAB_1004e8475;
                }
                cVar1 = FUN_1001ce7ad(&cf_com_apple_iBooksAuthor,0);
                if (cVar1 != '\0') {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar4 = DAT_1008c75b8;
                  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar1 == '\0') {
                    return 0;
                  }
                  pcVar3 = "sync> not syncing because iBooks Author is running";
                  goto LAB_1004e8475;
                }
              }
              if ((*(char *)(param_1 + 0x35c) == '\0') || (*(char *)(param_1 + 0x6abf) == '\0')) {
                lVar2 = FUN_100279b99();
                if (*(char *)(lVar2 + 0x1c) == '\0') {
                  if (*(char *)(param_1 + 0x14d7e) == '\0') {
                    if ((*(char *)(param_1 + 0x151d0) != '\0') &&
                       (*(char *)(param_1 + 0x6abf) != '\0')) {
                      if (*(char *)(param_1 + 0x33b) != '\0') {
                        if (*(char *)(param_1 + 0x151d2) != '\0') {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar4 = DAT_1008c75b8;
                          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar1 == '\0') {
                            return 1;
                          }
                          pcVar3 = "sync> syncing because music syncing is enabled";
                          goto LAB_1004e86a1;
                        }
                        if (*(char *)(param_1 + 0x151da) != '\0') {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar4 = DAT_1008c75b8;
                          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar1 == '\0') {
                            return 1;
                          }
                          pcVar3 = "sync> syncing because audiobook syncing is enabled";
                          goto LAB_1004e86a1;
                        }
                      }
                      if ((*(char *)(param_1 + 0x34e) != '\0') &&
                         (*(char *)(param_1 + 0x151d4) != '\0')) {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar4 = DAT_1008c75b8;
                        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar1 == '\0') {
                          return 1;
                        }
                        pcVar3 = "sync> syncing because movie syncing is enabled";
                        goto LAB_1004e86a1;
                      }
                      if ((*(char *)(param_1 + 0x34f) != '\0') &&
                         (*(char *)(param_1 + 0x151d6) != '\0')) {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar4 = DAT_1008c75b8;
                        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar1 == '\0') {
                          return 1;
                        }
                        pcVar3 = "sync> syncing because TV show syncing is enabled";
                        goto LAB_1004e86a1;
                      }
                      if ((*(char *)(param_1 + 0x39c) != '\0') &&
                         (*(char *)(param_1 + 0x151dc) != '\0')) {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar4 = DAT_1008c75b8;
                        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar1 == '\0') {
                          return 1;
                        }
                        pcVar3 = "sync> syncing because book syncing is enabled";
                        goto LAB_1004e86a1;
                      }
                    }
                    if ((*(char *)(param_1 + 0x6ac2) == '\0') ||
                       (*(char *)(param_1 + 0x151d8) == '\0')) {
                      if (((*(char *)(param_1 + 0x33c) == '\0') ||
                          (*(char *)(param_1 + 0x151de) == '\0')) ||
                         (*(char *)(param_1 + 0x6ac1) == '\0')) {
                        if (((*(char *)(param_1 + 0x359) == '\0') ||
                            (*(char *)(param_1 + 0x15218) == '\0')) ||
                           (*(char *)(param_1 + 0x6ac3) == '\0')) {
                          if ((*(char *)(param_1 + 0x6ac4) == '\0') ||
                             (*(char *)(param_1 + 0x6abf) == '\0')) {
                            if ((*(char *)(param_1 + 0x38b) == '\0') ||
                               (*(char *)(param_1 + 0x14dc9) == '\0')) {
                              if (DAT_1008c75c0 != -1) {
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              uVar4 = DAT_1008c75b8;
                              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                              if (cVar1 == '\0') {
                                return 0;
                              }
                              pcVar3 = 
                              "sync> not syncing because no sync settings are enabled for current library"
                              ;
                              goto LAB_1004e8475;
                            }
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            uVar4 = DAT_1008c75b8;
                            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                            if (cVar1 == '\0') {
                              return 1;
                            }
                            pcVar3 = "sync> syncing to generate speech clips";
                          }
                          else {
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            uVar4 = DAT_1008c75b8;
                            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                            if (cVar1 == '\0') {
                              return 1;
                            }
                            pcVar3 = "sync> syncing to update play counts";
                          }
                        }
                        else {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar4 = DAT_1008c75b8;
                          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar1 == '\0') {
                            return 1;
                          }
                          pcVar3 = "sync> syncing because structured syncing is enabled";
                        }
                      }
                      else {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar4 = DAT_1008c75b8;
                        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar1 == '\0') {
                          return 1;
                        }
                        pcVar3 = "sync> syncing because photo syncing is enabled";
                      }
                    }
                    else {
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar4 = DAT_1008c75b8;
                      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar1 == '\0') {
                        return 1;
                      }
                      pcVar3 = "sync> syncing because podcast syncing is enabled";
                    }
                    goto LAB_1004e86a1;
                  }
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar4 = DAT_1008c75b8;
                  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar1 == '\0') {
                    return 0;
                  }
                  pcVar3 = 
                  "sync> not syncing because device preference to sync when connected is disabled";
                }
                else {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar4 = DAT_1008c75b8;
                  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar1 == '\0') {
                    return 0;
                  }
                  pcVar3 = "sync> not syncing because syncing is disabled by administrator";
                }
                goto LAB_1004e8475;
              }
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar4 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 == '\0') {
                return 1;
              }
              pcVar3 = "sync> syncing because device uses flash UI";
            }
            else {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar4 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 == '\0') {
                return 1;
              }
              pcVar3 = "sync> syncing because device was restored from backup";
            }
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 == '\0') {
              return 1;
            }
            pcVar3 = "sync> syncing because device was set up as new";
          }
LAB_1004e86a1:
          local_28[0] = 0;
          __os_log_impl(0x100000000,uVar4,1,pcVar3,local_28,2);
          return 1;
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 == '\0') {
          return 0;
        }
        pcVar3 = "sync> not syncing because device requires activation";
      }
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 == '\0') {
        return 0;
      }
      pcVar3 = "sync> not syncing because in store activation or genius mode";
    }
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 == '\0') {
      return 0;
    }
    pcVar3 = "sync> not syncing because in safe mode";
  }
LAB_1004e8475:
  local_28[0] = 0;
  __os_log_impl(0x100000000,uVar4,1,pcVar3,local_28,2);
  return 0;
}

