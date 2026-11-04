// name: FUN_1001a472c
// address: 1001a472c

bool FUN_1001a472c(long param_1,uint param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_5c8 [40];
  undefined8 local_5a0;
  int local_598;
  undefined1 local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069d7e8(uVar3);
    }
LAB_1001a4788:
    bVar4 = false;
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10069d772(uVar3);
      }
      FUN_1001782e9(0,0);
      bVar4 = true;
      goto LAB_1001a4b52;
    }
    if (param_2 < 0x400) {
      puVar2 = local_428;
    }
    else {
      puVar2 = (undefined1 *)FUN_1001c63e1(param_2 + 1);
      if (puVar2 == (undefined1 *)0x0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10069d6fc(uVar3);
        }
        goto LAB_1001a4788;
      }
    }
    FUN_1001c631b(param_1,puVar2,(ulong)param_2);
    puVar2[param_2] = 0;
    FUN_1001a3e13(puVar2,&local_5a0);
    if (local_598 == 0) {
      bVar4 = false;
    }
    else {
      FUN_1001dfaed(local_5a0,local_598,local_5c8,0x20);
      cVar1 = FUN_1001df957("http",local_5c8,1);
      bVar4 = true;
      if (cVar1 == '\0') {
        cVar1 = FUN_1001df957("https",local_5c8,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_1001df957("itms",local_5c8,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_1001df957("itmss",local_5c8,1);
            if (cVar1 == '\0') {
              cVar1 = FUN_1001df957("music",local_5c8,1);
              if (cVar1 == '\0') {
                cVar1 = FUN_1001df957("musics",local_5c8,1);
                if (cVar1 == '\0') {
                  cVar1 = FUN_1001df957("macappstore",local_5c8,1);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_1001df957("com.apple.tv",local_5c8,1);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_1001df957("videos",local_5c8,1);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_1001df957("com.apple.watchlist",local_5c8,1);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_1001df957("pcast",local_5c8,1);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_1001df957("itpc",local_5c8,1);
                            if (cVar1 == '\0') {
                              cVar1 = FUN_1001df957("itls",local_5c8,1);
                              if (cVar1 == '\0') {
                                cVar1 = FUN_1001df957("itlss",local_5c8,1);
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_1001df957("itals",local_5c8,1);
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_1001df957("italss",local_5c8,1);
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_1001df957("itvls",local_5c8,1);
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_1001df957("itvlss",local_5c8,1);
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_1001df957("itsradio",local_5c8,1);
                                          if (cVar1 == '\0') {
                                            cVar1 = FUN_1001df957("itunesradio",local_5c8,1);
                                            if (cVar1 == '\0') {
                                              cVar1 = FUN_1001df957("gb-install",local_5c8,1);
                                              if (cVar1 == '\0') {
                                                cVar1 = FUN_1001df957("itms-books",local_5c8,1);
                                                if (cVar1 == '\0') {
                                                  cVar1 = FUN_1001df957("itms-bookss",local_5c8,1);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = FUN_1001df957("ibooks",local_5c8,1);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = FUN_1001df957("ibookss",local_5c8,1);
                                                      bVar4 = cVar1 != '\0';
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (puVar2 != local_428) {
      FUN_1001c64c1(puVar2);
    }
  }
LAB_1001a4b52:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

