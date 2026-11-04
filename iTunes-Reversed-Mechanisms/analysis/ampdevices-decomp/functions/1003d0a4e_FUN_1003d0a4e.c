// name: FUN_1003d0a4e
// address: 1003d0a4e

undefined8 FUN_1003d0a4e(undefined8 param_1,int param_2,long param_3,char param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0x44574e4c) {
    lVar2 = FUN_1004aa9fa(param_3 + 0x2c);
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "fileLocation != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1003d0bce;
    }
    if (param_4 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
LAB_1003d0b4f:
        uVar3 = FUN_1003d0cc2(param_1,lVar2);
        return uVar3;
      }
      goto LAB_1003d0c7e;
    }
    uVar3 = 0;
    cVar1 = FUN_1002b8a30(lVar2,0,0);
    if (cVar1 != '\0') {
      param_1 = DAT_1008c4d90;
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) goto LAB_1003d0c21;
      goto LAB_1003d0c7e;
    }
  }
  else if (param_2 == 0x48545450) {
    FUN_1001b7b34(&local_48,param_3 + 0x30,*(undefined4 *)(param_3 + 0x2c));
    FUN_1001b7a44(local_58);
    cVar1 = FUN_1002b8974(&local_48,local_58);
    uVar3 = DAT_1008c4d90;
    if (cVar1 == '\0') {
      puVar4 = local_68;
      FUN_1001b7a5c(puVar4,&local_48);
      uVar3 = FUN_10016ab90(uVar3,puVar4,0);
    }
    else {
      puVar4 = local_78;
      FUN_1001b7a5c(puVar4,local_58);
      uVar3 = FUN_10016ab90(uVar3,puVar4,0);
    }
    FUN_1001b7a50(puVar4);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(&local_48);
  }
  else {
    if (param_2 == 0x46494c45) {
      lVar2 = param_3 + 0x2c;
      if (*(int *)(param_3 + 0x2c) != 0x41464350) {
LAB_1003d0c21:
        uVar3 = FUN_10016ff43(param_1,lVar2);
        return uVar3;
      }
      if (param_4 != '\0') goto LAB_1003d0b4f;
    }
LAB_1003d0bce:
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
LAB_1003d0c7e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

