// name: FUN_1005a79d6
// address: 1005a79d6

int FUN_1005a79d6(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_668;
  char *local_664;
  undefined2 local_65c;
  undefined1 local_248 [512];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    iVar2 = -0x32;
    if (cVar1 != '\0') {
      puVar6 = &local_668;
      local_668 = 0x8220202;
      local_664 = "Assertion failure";
      local_65c = 0x822;
      pcVar5 = "dictSpeech != nullptr";
LAB_1005a7b3f:
      *(char **)((long)puVar6 + 0xe) = pcVar5;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",puVar6,0x16);
    }
  }
  else {
    *param_2 = 0;
    FUN_1001e115f(*(undefined8 *)(param_1 + 0x15f0),local_248);
    FUN_1001dfe75(local_248,0x5f,0x2d);
    FUN_1001e26e1(".plist",local_248);
    iVar2 = FUN_10017ecc9(param_1 + 0x1150,local_248,&local_668,0);
    if (iVar2 != 0) goto LAB_1005a7af8;
    lVar3 = FUN_10016aa24(DAT_1008c4d90,&local_668,0,0);
    *param_2 = lVar3;
    iVar2 = 0;
    if (lVar3 != 0) goto LAB_1005a7af8;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    iVar2 = -0xd0;
    if (cVar1 != '\0') {
      puVar6 = &local_48;
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      pcVar5 = "*dictSpeech != nullptr";
      goto LAB_1005a7b3f;
    }
  }
  FUN_1001782e9(0,0);
LAB_1005a7af8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

