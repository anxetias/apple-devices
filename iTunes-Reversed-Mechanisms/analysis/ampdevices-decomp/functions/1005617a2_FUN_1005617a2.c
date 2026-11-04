// name: FUN_1005617a2
// address: 1005617a2

int FUN_1005617a2(ulong param_1,int param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                 long *param_6)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined1 auVar9 [16];
  long local_10c8;
  char local_10b9;
  undefined4 local_10b8;
  char *local_10b4;
  undefined2 local_10ac;
  int local_10aa;
  undefined1 local_1098 [512];
  undefined1 local_e98 [512];
  undefined4 local_c98;
  char *local_c94;
  undefined2 local_c8c;
  int local_c8a;
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  int local_86a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1005617ba;
  auVar9 = FUN_100108310();
  lVar1 = -auVar9._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_10c8 = 0;
  if (param_6 == (long *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x10056183a;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x10056184a;
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_44a = "outImageLibrary != nullptr";
LAB_100561b8b:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100561bb0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    *param_6 = 0;
    if (((uint)param_4 >> 10 & 1) != 0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1005618b1;
      iVar4 = FUN_100561d9d(param_4 & 0xffffffff,param_5,&local_458);
      if (iVar4 == -0x80) goto LAB_100561861;
      if (iVar4 != 0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100561aae;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100561abe;
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_878 = 0x8220202;
          local_874 = "Assertion failure";
          local_86c = 0x400;
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100561b0b;
          local_86a = iVar4;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_878,0x12);
        }
        goto LAB_100561861;
      }
      bVar2 = (int)param_1 == 0x69545620;
      local_10b9 = param_2 == 2 && bVar2;
      pcVar6 = "iPod Photo Cache";
      if (param_2 == 2 && bVar2) {
        pcVar6 = "Apple TV Photo Cache";
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1005618fc;
      FUN_1001e04f5(pcVar6,local_e98);
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100561912;
      iVar4 = FUN_10058fa81(local_e98,&local_458,&local_878);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          pcVar6 = "Photo Database";
          if (local_10b9 != '\0') {
            pcVar6 = "Apple TV Photo Database";
          }
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10056194f;
          FUN_1001e04f5(pcVar6,local_1098);
          *(undefined8 *)(&stack0xffffffffffffffd0 + lVar1) = 0;
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10056197a;
          iVar4 = FUN_10058e6cd(&local_878,&local_878,local_1098,auVar9._8_8_ & 0xffffffff,
                                &local_c98,&local_10c8);
          lVar7 = local_10c8;
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1005619ae;
              _memcpy((void *)(local_10c8 + 0x750),&local_458,0x420);
              *(undefined1 *)(lVar7 + 0xb70) = 1;
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1005619ca;
              iVar4 = FUN_1001ceb24(param_5,0x696d7074,0,0,0);
              if (iVar4 != -0x80) {
                if (iVar4 == 0) {
                  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar1) = 0;
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x100561a06;
                  iVar4 = FUN_100561ece(param_1 & 0xffffffff,param_2,0x79,param_4 & 0xffffffff,
                                        param_5,local_10c8);
                  if (iVar4 != -0x80) {
                    if (iVar4 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x100561a34;
                      iVar4 = FUN_100593410(local_10c8,0x696d7074,param_5,1);
                      if (iVar4 != -0x80) {
                        if (iVar4 == 0) {
                          if ((param_4 & 0x20) == 0) {
LAB_100561a95:
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x100561aa1;
                            FUN_10018e077(&local_878);
                            iVar4 = 0;
                          }
                          else {
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x100561a72;
                            iVar4 = FUN_10038b674(local_10c8,&local_878,local_1098,0,&local_c98);
                            if (iVar4 != -0x80) {
                              if (iVar4 == 0) {
                                *(undefined8 *)((long)&local_38 + lVar1) = 0x100561a95;
                                FUN_100496f8c(local_10c8,0);
                                goto LAB_100561a95;
                              }
                              *(undefined8 *)((long)&local_38 + lVar1) = 0x100561d4d;
                              uVar5 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar1) = 0x100561d5d;
                              cVar3 = _os_log_type_enabled(uVar5,0x10);
                              if (cVar3 != '\0') {
                                puVar8 = &local_10b8;
                                local_10b8 = 0x8220202;
                                local_10b4 = "Assertion failure";
                                local_10ac = 0x400;
                                local_10aa = iVar4;
                                goto LAB_100561cf9;
                              }
                            }
                          }
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x100561cb3;
                          uVar5 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x100561cc3;
                          cVar3 = _os_log_type_enabled(uVar5,0x10);
                          if (cVar3 != '\0') {
                            puVar8 = &local_10b8;
                            local_10b8 = 0x8220202;
                            local_10b4 = "Assertion failure";
                            local_10ac = 0x400;
                            local_10aa = iVar4;
                            goto LAB_100561cf9;
                          }
                        }
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x100561c62;
                      uVar5 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x100561c72;
                      cVar3 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar3 != '\0') {
                        puVar8 = &local_10b8;
                        local_10b8 = 0x8220202;
                        local_10b4 = "Assertion failure";
                        local_10ac = 0x400;
                        local_10aa = iVar4;
                        goto LAB_100561cf9;
                      }
                    }
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x100561c0e;
                  uVar5 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x100561c1e;
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    puVar8 = &local_10b8;
                    local_10b8 = 0x8220202;
                    local_10b4 = "Assertion failure";
                    local_10ac = 0x400;
                    local_10aa = iVar4;
                    goto LAB_100561cf9;
                  }
                }
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100561bba;
              uVar5 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100561bca;
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                puVar8 = &local_10b8;
                local_10b8 = 0x8220202;
                local_10b4 = "Assertion failure";
                local_10ac = 0x400;
                local_10aa = iVar4;
                goto LAB_100561cf9;
              }
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100561b15;
          uVar5 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100561b25;
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            puVar8 = &local_c98;
            local_c98 = 0x8220202;
            local_c94 = "Assertion failure";
            local_c8c = 0x400;
            local_c8a = iVar4;
LAB_100561cf9:
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100561d0c;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",puVar8,0x12);
          }
        }
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100561d18;
      FUN_10058faf7(&local_878);
      lVar7 = local_10c8;
      if (local_10c8 != 0 && iVar4 != 0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100561d37;
        FUN_100495a1c();
        lVar7 = 0;
      }
      *param_6 = lVar7;
      goto LAB_100561861;
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1005617f5;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100561805;
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_44a = "PhotoImportOptions::ExactlyOnePhotoApplicationSpecified(importOptions)";
      goto LAB_100561b8b;
    }
  }
  *(undefined8 *)((long)&local_38 + lVar1) = 0x10056185b;
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_100561861:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_38 + lVar1) = FUN_100561d9d;
  ___stack_chk_fail();
}

