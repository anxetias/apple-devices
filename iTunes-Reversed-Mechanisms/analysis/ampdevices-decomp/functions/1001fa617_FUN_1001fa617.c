// name: FUN_1001fa617
// address: 1001fa617

int FUN_1001fa617(void *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined1 auVar9 [16];
  long local_1128;
  long local_1120;
  char local_1118;
  undefined1 auStack_1117 [1055];
  undefined1 local_cf8 [512];
  undefined1 local_af8 [64];
  undefined1 local_ab8 [64];
  undefined1 local_a78 [1056];
  undefined1 local_658 [512];
  undefined1 local_458 [1048];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1001fa62f;
  auVar9 = FUN_100108310();
  lVar1 = -auVar9._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1120 = 0;
  local_1128 = 0;
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa66b;
  ___bzero(local_458,0x420);
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa673;
  cVar4 = FUN_10017cbd0(param_1);
  if (cVar4 == '\0') {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa89b;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa8ab;
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa8b7;
      FUN_1006cbf27(uVar7);
    }
  }
  else {
    if (param_2 != 0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa693;
      iVar5 = FUN_10017d489(param_1,local_658);
      bVar2 = true;
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa6bf;
          iVar5 = FUN_1001f7388(param_1,1,&local_1120);
          if (iVar5 != -0x80) {
            if (iVar5 == 0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa6e3;
              iVar5 = FUN_1001f7ceb(local_1120,param_2);
              if (iVar5 == 0) {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa6fd;
                iVar5 = FUN_10017d5ba(param_1,local_a78);
                bVar2 = true;
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa728;
                    FUN_1001e04f5("ZipTempFile",local_ab8);
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa73e;
                    FUN_1001e04f5("tmp",local_af8);
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa75b;
                    iVar5 = FUN_10053600d(local_a78,local_ab8,local_af8,local_cf8);
                    if (iVar5 != -0x80) {
                      if (iVar5 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa791;
                        iVar5 = FUN_1001f7080(local_a78,local_cf8,local_458,&local_1128);
                        lVar3 = local_1128;
                        if (iVar5 != -0x80) {
                          if (iVar5 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa7b9;
                            uVar7 = FUN_1001f79c7(local_1120);
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa7c4;
                            FUN_1001f7b0a(lVar3,uVar7);
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa7d0;
                            iVar5 = FUN_1001f7ba5(local_1120);
                            if (iVar5 != -0x80) {
                              if (iVar5 == 0) {
                                do {
                                  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar1) = 0;
                                  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar1) = 0;
                                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa80f;
                                  iVar5 = FUN_1001f7dcb(local_1120,&local_1118,0x400,0,0,0);
                                  if (iVar5 != 0) {
                                    if (iVar5 != -0x80) {
                                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fab17;
                                      uVar7 = FUN_1001cc310();
                                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fab27;
                                      cVar4 = _os_log_type_enabled(uVar7,0x10);
                                      if (cVar4 != '\0') {
                                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fab6c;
                                        FUN_1006cbbbd(iVar5,uVar7);
                                      }
                                    }
                                    goto LAB_1001fab2b;
                                  }
                                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa827;
                                  cVar4 = FUN_1001df957(&local_1118,param_2,1);
                                  if (cVar4 == '\0') {
                                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa833;
                                    sVar8 = _strlen(&local_1118);
                                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa83d;
                                    uVar6 = FUN_1001e2019(&local_1118,sVar8 & 0xffffffff);
                                    if (0 < (int)uVar6) {
                                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa85b;
                                      cVar4 = FUN_1001df957(auStack_1117 + uVar6,"obsl",1);
                                      if (cVar4 != '\0') goto LAB_1001fa87a;
                                    }
                                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa872;
                                    iVar5 = FUN_1001fab73(local_1120,local_1128);
                                    if (iVar5 != 0) {
                                      if (iVar5 != -0x80) {
                                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fab40;
                                        uVar7 = FUN_1001cc310();
                                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fab50;
                                        cVar4 = _os_log_type_enabled(uVar7,0x10);
                                        if (cVar4 != '\0') {
                                          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fab5f;
                                          FUN_1006cbb51(iVar5,uVar7);
                                        }
                                      }
                                      goto LAB_1001fab2b;
                                    }
                                  }
LAB_1001fa87a:
                                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa886;
                                  iVar5 = FUN_1001f7c48(local_1120);
                                } while (iVar5 == 0);
                                iVar5 = 0;
                              }
                              else {
                                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faae9;
                                uVar7 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faaf9;
                                cVar4 = _os_log_type_enabled(uVar7,0x10);
                                if (cVar4 != '\0') {
                                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fab08;
                                  FUN_1006cbc29(iVar5,uVar7);
                                }
                              }
                            }
LAB_1001fab2b:
                            bVar2 = false;
                          }
                          else {
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faabc;
                            uVar7 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faacc;
                            cVar4 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar4 != '\0') {
                              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faadf;
                              FUN_1006cbc95(iVar5,uVar7);
                            }
                          }
                        }
                      }
                      else {
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faa8f;
                        uVar7 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faa9f;
                        cVar4 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar4 != '\0') {
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faab2;
                          FUN_1006cbd01(iVar5,uVar7);
                        }
                      }
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faa52;
                    uVar7 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faa62;
                    cVar4 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar4 != '\0') {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faa75;
                      FUN_1006cbd6d(iVar5,uVar7);
                    }
                  }
                }
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa915;
              uVar7 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa925;
              cVar4 = _os_log_type_enabled(uVar7,0x10);
              if (cVar4 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faa85;
                FUN_1006cbdd9(iVar5,uVar7);
              }
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa8ef;
          uVar7 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa8ff;
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa90e;
            FUN_1006cbe45(iVar5,uVar7);
          }
        }
      }
      if (local_1120 != 0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa93e;
        FUN_1001f7652();
      }
      if (local_1128 != 0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa94f;
        FUN_1001f7652();
      }
      if (!bVar2) {
        if (iVar5 == 0) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa985;
          _memcpy(local_a78,param_1,0x420);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa9a0;
          _memcpy(&local_1118,local_458,0x420);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa9ab;
          iVar5 = FUN_100189700(local_a78,&local_1118);
          if (iVar5 == 0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa9e3;
            FUN_100182d4d(&local_1118);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa9fb;
            _memcpy(local_458,local_a78,0x420);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa9bb;
            FUN_100182d4d(local_a78);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa9d5;
            FUN_1001894bc(&local_1118,local_658,local_458);
          }
          if (auVar9._8_8_ != (void *)0x0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faa14;
            _memcpy(auVar9._8_8_,local_458,0x420);
          }
          iVar5 = 0;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa969;
          FUN_100182d4d(local_458);
        }
      }
      goto LAB_1001faa17;
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa8be;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa8ce;
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001faa48;
      FUN_1006cbeb1(uVar7);
    }
  }
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001fa8df;
  FUN_1001782e9(0,0);
  iVar5 = -0x32;
LAB_1001faa17:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_38 + lVar1) = FUN_1001fab73;
  ___stack_chk_fail();
}

