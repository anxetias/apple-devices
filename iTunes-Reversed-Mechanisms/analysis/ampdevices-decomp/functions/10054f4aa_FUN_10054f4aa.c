// name: FUN_10054f4aa
// address: 10054f4aa

int FUN_10054f4aa(long param_1,int param_2,undefined8 param_3,long param_4,uint param_5,
                 undefined8 param_6,undefined1 *param_7,undefined8 *param_8)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  long local_78;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_64 = param_5;
  FUN_1001c62d9(&local_80,8);
  uStack_7e = 0xffff;
  lVar4 = *(long *)(param_1 + 0x20);
  for (lVar6 = *(long *)(lVar4 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
    lVar4 = FUN_1003b6f88(*(undefined4 *)(lVar6 + 0x48),lVar6 + 0x4c,param_2,param_3);
    if ((char)lVar4 != '\0') {
      if (*(long *)(lVar6 + 0x63e8) != 0) {
        piVar1 = (int *)(*(long *)(lVar6 + 0x63e8) + 4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1005d3cba();
        }
        if (param_4 != 0) {
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
        }
        *(long *)(lVar6 + 0x63e8) = param_4;
      }
      local_60 = 0;
      goto LAB_10054f568;
    }
  }
  local_60 = (undefined4)CONCAT71((int7)((ulong)lVar4 >> 8),1);
  lVar6 = 0;
LAB_10054f568:
  if ((param_2 == 0x4d46494c) || (iVar3 = -0x32, param_2 == 0x46494c45)) {
    iVar3 = FUN_10054d4e4(param_1,param_2,param_3,(local_64 & 8) << 5);
    if (iVar3 != 0) {
LAB_10054f5a7:
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 1;
      }
      if (param_8 != (undefined8 *)0x0) {
        *param_8 = CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
      }
      iVar3 = 0;
      if (((char)local_60 == '\0') && (*(long *)(lVar6 + 0x63e8) != 0)) {
        *(undefined1 *)(lVar6 + 0x63f0) = 1;
        *(ulong *)(lVar6 + 0x63f4) = CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
      }
      goto LAB_10054f70d;
    }
    local_78 = 0;
    local_59 = '\0';
    iVar3 = FUN_10015cd83(param_1 + 0x710,&local_88);
    if (iVar3 == 0) {
      iVar3 = FUN_1005d872c(param_1 + 0x710,1,&local_59,&local_78);
      if (local_78 != 0 && iVar3 == 0) {
        local_6c = 0;
        local_68 = 0;
        iVar3 = FUN_1001c8e4e(local_78,&local_84);
        if (iVar3 == 0) {
          iVar3 = FUN_1003af9ea(local_78,param_4,&local_68,&local_6c);
        }
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            local_80 = (undefined2)local_68;
            uStack_7c = local_6c;
            if ((local_59 != '\0') || (iVar3 = FUN_1001cbf54(local_78,local_84,1), iVar3 == 0)) {
              iVar3 = FUN_10054db1c(param_1,local_88,local_64,param_6);
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = iVar3;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        FUN_1001c8d4b(local_78,0);
      }
      FUN_10054d72e(param_1);
      if (iVar3 == 0) goto LAB_10054f5a7;
    }
    else {
      FUN_10054d72e(param_1);
    }
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
LAB_10054f70d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

