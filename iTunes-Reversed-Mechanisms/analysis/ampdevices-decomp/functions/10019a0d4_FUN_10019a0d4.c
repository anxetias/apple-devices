// name: FUN_10019a0d4
// address: 10019a0d4

int FUN_10019a0d4(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0 [2];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int *local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  local_70 = 0xbff0000000000000;
  local_90 = param_6;
  local_88 = param_5;
  local_80 = param_2;
  local_64 = param_3;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6874646c)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100698540(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100197ff4(param_4);
    if (cVar1 == '\0') {
      FUN_100197f12(param_4);
      local_78 = param_1 + 4;
      iVar5 = 0;
      do {
        param_1[0x6c] = iVar5;
        local_100[0] = 0;
        local_f8 = 0;
        local_f0[0] = 0;
        FUN_1001b7a44(local_e8);
        FUN_1001b7a44(local_d8);
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_98 = 0;
        local_c8 = local_88;
        local_c0 = local_90;
        iVar2 = FUN_100198282(param_4,iVar5);
        if (iVar2 == 0) {
          iVar2 = FUN_100198320(param_4,iVar5,local_d8);
          if (iVar2 != 0) {
            if (iVar2 == -0x80) goto LAB_10019a994;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            goto joined_r0x00010019a370;
          }
          iVar2 = FUN_10019839c(param_4,iVar5,local_e8);
          if (iVar2 != 0) {
            if (iVar2 == -0x80) goto LAB_10019a994;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            goto joined_r0x00010019a370;
          }
          iVar2 = FUN_100198418(param_4,iVar5,local_f0);
          if (iVar2 != 0) {
            if (iVar2 == -0x80) goto LAB_10019a994;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            goto joined_r0x00010019a370;
          }
          iVar2 = FUN_10019848c(param_4,iVar5,&local_70);
          if (iVar2 != 0) {
            if (iVar2 == -0x80) goto LAB_10019a994;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            goto joined_r0x00010019a370;
          }
          iVar2 = FUN_100199bda(local_100,&local_60);
          if (iVar2 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            goto joined_r0x00010019a370;
          }
          FUN_1001b7a50(local_d8);
          FUN_1001b7a50(local_e8);
        }
        else {
          if (iVar2 == -0x80) {
LAB_10019a994:
            FUN_1001b7a50(local_d8);
            FUN_1001b7a50(local_e8);
            iVar2 = -0x80;
            goto LAB_10019a9f8;
          }
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
joined_r0x00010019a370:
          if (cVar1 != '\0') {
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            local_4a = iVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          FUN_1001b7a50(local_d8);
          FUN_1001b7a50(local_e8);
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                FUN_10069845e(iVar2,uVar4);
              }
            }
            goto LAB_10019a9f8;
          }
        }
        uVar4 = local_60;
        if (*(code **)(param_1 + 2) != (code *)0x0) {
          (**(code **)(param_1 + 2))(0x636f6e73,local_60,0,local_78);
        }
        param_1[1] = 0;
        iVar2 = FUN_1001999a7((int)local_70,param_1,uVar4,local_80,local_64,1);
        while ((((char)param_1[0x14] != '\0' && (*(char *)((long)param_1 + 0x51) != '\0')) &&
               (*(long *)(param_1 + 0x16) != 0))) {
          FUN_10017060f(uVar4);
          local_60 = 0;
          FUN_10019bd70(param_1 + 0x1a);
          iVar5 = param_1[0x6c];
          uVar4 = *(undefined8 *)(param_1 + 0x16);
          local_100[0] = 0;
          local_f8 = 0;
          local_f0[0] = 0;
          FUN_1001b7a44(local_e8);
          FUN_1001b7a44(local_d8);
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_98 = 0;
          local_c8 = local_88;
          local_c0 = local_90;
          local_f8 = uVar4;
          iVar2 = FUN_100198320(param_4,iVar5,local_d8);
          if (iVar2 == 0) {
            iVar2 = FUN_10019839c(param_4,iVar5,local_e8);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                goto joined_r0x00010019a6d3;
              }
              goto LAB_10019a994;
            }
            iVar2 = FUN_100198418(param_4,iVar5,local_f0);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                goto joined_r0x00010019a6d3;
              }
              goto LAB_10019a994;
            }
            iVar2 = FUN_10019848c(param_4,iVar5,&local_70);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                goto joined_r0x00010019a6d3;
              }
              goto LAB_10019a994;
            }
            iVar2 = FUN_100199bda(local_100,&local_60);
            if (iVar2 != 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              goto joined_r0x00010019a6d3;
            }
            FUN_1001b7a50(local_d8);
            FUN_1001b7a50(local_e8);
          }
          else {
            if (iVar2 == -0x80) goto LAB_10019a994;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
joined_r0x00010019a6d3:
            if (cVar1 != '\0') {
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              local_4a = iVar2;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            FUN_1001b7a50(local_d8);
            FUN_1001b7a50(local_e8);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  FUN_1006983f2(iVar2,uVar4);
                }
              }
              goto LAB_10019a9f8;
            }
          }
          uVar4 = local_60;
          param_1[1] = 0;
          iVar2 = FUN_1001999a7((int)local_70,param_1,local_60,local_80,local_64,1);
        }
        FUN_10017060f(uVar4);
        local_60 = 0;
        if (((param_1[1] == 100) ||
            (iVar5 = param_1[0x6c], uVar3 = FUN_10019806e(param_4), uVar3 <= iVar5 + 1U)) ||
           (((5 < iVar2 + 0xcc0U || ((0x33U >> (iVar2 + 0xcc0U & 0x1f) & 1) == 0)) &&
            ((1 < iVar2 - 1U && (iVar2 != -0xc4e)))))) goto LAB_10019a9e0;
        iVar5 = param_1[0x6c] + 1;
      } while( true );
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006984ca(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_10019a19d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
LAB_10019a9e0:
  if (*(code **)(param_1 + 2) != (code *)0x0) {
    (**(code **)(param_1 + 2))(0x646f6e65,0,0,local_78);
  }
LAB_10019a9f8:
  FUN_10017060f(local_60);
  FUN_100197fda(param_4);
  goto LAB_10019a19d;
}

