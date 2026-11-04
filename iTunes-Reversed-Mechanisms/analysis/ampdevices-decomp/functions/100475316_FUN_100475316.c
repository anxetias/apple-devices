// name: FUN_100475316
// address: 100475316

ulong FUN_100475316(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong unaff_R14;
  int local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((((*(long *)(param_1 + 0x58) != 0) &&
       (*(int *)(*(long *)(param_1 + 0x58) + 0x3c) == 0x48545450)) &&
      (unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1),
      *(int *)(*(long *)(param_1 + 0x10) + 0x84) == 0x6973756d)) ||
     (unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1), (*(byte *)(param_1 + 0xc3) & 8) != 0))
  goto LAB_1004753e1;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1004753b6;
    }
    if ((*(byte *)(lVar1 + 0x1bb4) & 4) != 0) goto LAB_1004753e1;
  }
LAB_1004753b6:
  local_48 = 0;
  iVar3 = FUN_100474029(param_1,0,0,&local_48);
  unaff_R14 = CONCAT71((int7)((ulong)&local_48 >> 8),iVar3 == local_48 && local_48 != 0);
LAB_1004753e1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return unaff_R14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

