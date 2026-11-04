// name: FUN_100226460
// address: 100226460

int FUN_100226460(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_1360;
  undefined8 local_1358;
  long local_1350;
  undefined4 local_1348;
  char *local_1344;
  undefined2 local_133c;
  int local_133a;
  undefined1 local_1328 [512];
  undefined1 local_1128 [1056];
  undefined1 local_d08 [1056];
  undefined1 local_8e8 [1056];
  undefined1 local_4c8 [1056];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100226478;
  lVar5 = FUN_100108310();
  lVar5 = -lVar5;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1350 = 0;
  local_1360 = 0;
  local_1358 = 0;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002264b3;
  FUN_1004d896c(local_4c8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002264c7;
  iVar4 = FUN_1001f7388(param_2,1,&local_1350);
  bVar1 = true;
  bVar2 = true;
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002264f0;
      iVar4 = FUN_100226c67(local_1350,&cf_Readme_rtf);
      if (iVar4 == -0x80) goto LAB_1002269f8;
      if (iVar4 == 0) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100226516;
        iVar4 = FUN_1001fb86d(local_1350,&local_1360);
        if (iVar4 == -0x80) goto LAB_1002269f8;
        if (iVar4 == 0) {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100226535;
          iVar4 = FUN_10018e9e7(local_1128);
          if (iVar4 == -0x80) goto LAB_1002269f8;
          if (iVar4 == 0) {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100226569;
            iVar4 = FUN_10018498f(local_1128,"Release Notes","rtf",local_1328);
            if (iVar4 == -0x80) goto LAB_1002269f8;
            if (iVar4 == 0) {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002265a0;
              iVar4 = FUN_1001660b3(local_1360,local_1128,local_1328,local_8e8,0);
              if (iVar4 == -0x80) goto LAB_1002269f8;
              if (iVar4 == 0) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1002265c6;
                iVar4 = FUN_100226c67(local_1350,&cf_License_rtf);
                bVar2 = bVar1;
                if (iVar4 != -0x80) {
                  if (iVar4 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1002265ec;
                    iVar4 = FUN_1001fb86d(local_1350,&local_1358);
                    if (iVar4 != -0x80) {
                      if (iVar4 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x100226b03;
                        uVar6 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x100226b13;
                        cVar3 = _os_log_type_enabled(uVar6,0x10);
                        goto joined_r0x000100226ac1;
                      }
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x100226620;
                      iVar4 = FUN_10018498f(local_1128,"License","rtf",local_1328);
                      if (iVar4 != -0x80) {
                        if (iVar4 != 0) {
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x100226b57;
                          uVar6 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x100226b67;
                          cVar3 = _os_log_type_enabled(uVar6,0x10);
                          goto joined_r0x000100226ac1;
                        }
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x100226657;
                        iVar4 = FUN_1001660b3(local_1358,local_1128,local_1328,local_d08,0);
                        if (iVar4 != -0x80) {
                          if (iVar4 != 0) {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x100226ba8;
                            uVar6 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x100226bb8;
                            cVar3 = _os_log_type_enabled(uVar6,0x10);
                            goto joined_r0x000100226ac1;
                          }
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x100226672;
                          cVar3 = FUN_100247cdd(param_1 & 0xffffffff);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x100226684;
                          uVar6 = FUN_100416f20(param_1 & 0xffffffff,
                                                0x10cc0100 - (uint)(cVar3 == '\0'));
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x100226693;
                          FUN_1001b81f2(local_98,uVar6);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002266a4;
                          FUN_1001c334a(&local_1348,0x5db3001d);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002266b7;
                          FUN_1001b80b2(local_88,&local_1348);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002266c3;
                          FUN_1001b7a50(&local_1348);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002266d4;
                          FUN_1001c334a(&local_1348,0x5db30004);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002266e7;
                          FUN_1001b80b2(local_78,&local_1348);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002266f3;
                          FUN_1001b7a50(&local_1348);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x100226700;
                          uVar6 = FUN_100416f20(param_1 & 0xffffffff,0x10cc0140);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x10022670f;
                          FUN_1001b81f2(local_68,uVar6);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x10022672a;
                          _memcpy(local_4c8,local_8e8,0x420);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x100226732;
                          cVar3 = FUN_1004d8a72(local_4c8);
                          if (cVar3 == '\0') {
                            iVar4 = -0x80;
                          }
                          else {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x10022674b;
                            FUN_1001c334a(&local_1348,0x5db3001f);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x10022675a;
                            FUN_1001b80b2(local_88,&local_1348);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x100226766;
                            FUN_1001b7a50(&local_1348);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x100226777;
                            FUN_1001c334a(&local_1348,0x5db30020);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x100226786;
                            FUN_1001b80b2(local_78,&local_1348);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x100226792;
                            FUN_1001b7a50(&local_1348);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x10022679f;
                            uVar6 = FUN_100416f20(param_1 & 0xffffffff,0x10cc0141);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002267aa;
                            FUN_1001b81f2(local_68,uVar6);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002267c2;
                            _memcpy(local_4c8,local_d08,0x420);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002267cf;
                            uVar6 = FUN_100416f20(param_1 & 0xffffffff,0x10cc01bd);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002267db;
                            FUN_1001b81f2(local_48,uVar6);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002267e7;
                            cVar3 = FUN_1004d8a72(local_4c8);
                            iVar4 = (uint)(cVar3 != '\0') * 0x80 + -0x80;
                          }
                          bVar2 = false;
                        }
                      }
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x100226aaf;
                    uVar6 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x100226abf;
                    cVar3 = _os_log_type_enabled(uVar6,0x10);
joined_r0x000100226ac1:
                    if (cVar3 != '\0') {
                      local_133c = 0x400;
                      local_1344 = "Assertion failure";
                      local_1348 = 0x8220202;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x100226c01;
                      local_133a = iVar4;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                          &local_1348,0x12);
                    }
                  }
                }
                bVar1 = false;
                goto LAB_1002269fb;
              }
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10022699f;
              uVar6 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002269af;
              cVar3 = _os_log_type_enabled(uVar6,0x10);
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10022694e;
              uVar6 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10022695e;
              cVar3 = _os_log_type_enabled(uVar6,0x10);
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002268fa;
            uVar6 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10022690a;
            cVar3 = _os_log_type_enabled(uVar6,0x10);
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002268a6;
          uVar6 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002268b6;
          cVar3 = _os_log_type_enabled(uVar6,0x10);
        }
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100226852;
        uVar6 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100226862;
        cVar3 = _os_log_type_enabled(uVar6,0x10);
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002267fe;
      uVar6 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10022680e;
      cVar3 = _os_log_type_enabled(uVar6,0x10);
    }
    if (cVar3 != '\0') {
      local_133c = 0x400;
      local_1344 = "Assertion failure";
      local_1348 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002269f8;
      local_133a = iVar4;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_1348,0x12);
    }
  }
LAB_1002269f8:
  bVar1 = true;
LAB_1002269fb:
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a07;
  FUN_10017060f(local_1360);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a13;
  FUN_10017060f(local_1358);
  if (local_1350 != 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a24;
    FUN_1001f7652();
  }
  if (!bVar1) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a35;
    FUN_100182d4d(local_8e8);
  }
  if (!bVar2) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a46;
    FUN_100182d4d(local_d08);
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a4f;
  FUN_1001b7a50(local_48);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a58;
  FUN_1001b7a50(local_68);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a61;
  FUN_1001b7a50(local_78);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a6a;
  FUN_1001b7a50(local_88);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a76;
  FUN_1001b7a50(local_98);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100226a82;
  FUN_1001b7a50(local_a8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar5) = &UNK_100226c18;
    ___stack_chk_fail();
  }
  return iVar4;
}

