// name: FUN_100536b8c
// address: 100536b8c

undefined4 FUN_100536b8c(long param_1,short *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_298 [32];
  undefined1 local_278 [64];
  short local_238 [260];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = 1;
  if ((param_1 == 0) || (cVar1 = FUN_1001c5630(&DAT_1008c2128,param_1,0x420), cVar1 != '\0'))
  goto LAB_100536f8d;
  if (param_2 == (short *)0x0) {
    param_2 = local_238;
    local_238[0] = 0;
    FUN_10017d489(param_1,param_2);
  }
  if (*param_2 == 0) goto LAB_100536f8d;
  FUN_1001e222d(param_2,local_278);
  FUN_1001e4c6b(local_278,local_298);
  cVar1 = FUN_1001df7be("pls",local_298,1);
  uVar3 = 4;
  if (cVar1 == '\0') {
    cVar1 = FUN_1001df7be("rmp",local_298,1);
    uVar3 = 2;
    if (cVar1 == '\0') {
      cVar1 = FUN_1001df7be("m3u8",local_298,1);
      uVar3 = 0x80000;
      if (cVar1 == '\0') {
        cVar1 = FUN_1001df7be("m3u",local_298,1);
        uVar3 = 8;
        if (cVar1 == '\0') {
          cVar1 = FUN_1001df7be("itms",local_298,1);
          uVar3 = 0x100;
          if (cVar1 == '\0') {
            cVar1 = FUN_1001df7be("pcast",local_298,1);
            uVar3 = 0x2000;
            if ((cVar1 == '\0') && (cVar1 = FUN_1001df7be("itpc",local_298,1), cVar1 == '\0')) {
              cVar1 = FUN_1001df7be("opml",local_298,1);
              uVar3 = 0x4000;
              if (cVar1 == '\0') {
                cVar1 = FUN_1001df7be("tmp",local_298,1);
                uVar3 = 0x2000000;
                if (cVar1 == '\0') {
                  cVar1 = FUN_1001df7be("webloc",local_298,1);
                  uVar3 = 0x100;
                  if (cVar1 == '\0') {
                    cVar1 = FUN_1001df7be("inetloc",local_298,1);
                    uVar3 = 0x200;
                    if (cVar1 == '\0') {
                      cVar1 = FUN_1001df7be("scpt",local_298,1);
                      uVar3 = 0x20;
                      if (((cVar1 == '\0') &&
                          (cVar1 = FUN_1001df7be("scptd",local_298,1), cVar1 == '\0')) &&
                         (cVar1 = FUN_1001df7be("applescript",local_298,1), cVar1 == '\0')) {
                        cVar1 = FUN_1001df7be("aiff",local_298,1);
                        if ((cVar1 == '\0') &&
                           (cVar1 = FUN_1001df7be("cdda",local_298,1), cVar1 == '\0')) {
                          FUN_1001df7be("cda",local_298,1);
                        }
                        cVar1 = FUN_1001df7be("wma",local_298,1);
                        uVar3 = 0x400;
                        if (cVar1 == '\0') {
                          cVar1 = FUN_1001df7be("pdf",local_298,1);
                          uVar3 = 0x1000;
                          if (cVar1 == '\0') {
                            cVar1 = FUN_1001df7be("ite",local_298,1);
                            uVar3 = 0x40000;
                            if ((cVar1 == '\0') &&
                               (cVar1 = FUN_1001df7be("itlp",local_298,1), cVar1 == '\0')) {
                              cVar1 = FUN_1001df7be("epub",local_298,1);
                              uVar3 = 0x1000000;
                              if ((cVar1 == '\0') &&
                                 (cVar1 = FUN_1001df7be("ibooks",local_298,1), cVar1 == '\0')) {
                                cVar1 = FUN_1001df7be("ipg",local_298,1);
                                uVar3 = 0x8000;
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_1001df7be("ipa",local_298,1);
                                  uVar3 = 0x100000;
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_1001df7be("app",local_298,1);
                                    if (cVar1 != '\0') {
                                      cVar1 = FUN_100209afe(param_1,0,0);
                                      uVar3 = 0x200000;
                                      if (cVar1 != '\0') goto LAB_100536f8a;
                                    }
                                    cVar1 = FUN_1001df7be("mobileprovision",local_298,1);
                                    uVar3 = 0x800000;
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_1001df7be("ipsw",local_298,1);
                                      uVar3 = 0x10000;
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_1001df7be("ipd",local_298,1);
                                        uVar3 = 0x400000;
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_1001df7be("m4r",local_298,1);
                                          uVar3 = 0x20000;
                                          if (cVar1 == '\0') goto LAB_100536f8d;
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
LAB_100536f8a:
  uVar2 = uVar3;
LAB_100536f8d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

