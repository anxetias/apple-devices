// name: FUN_1001903df
// address: 1001903df

bool FUN_1001903df(long param_1,long param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  char local_858 [8];
  long local_850;
  char local_448 [8];
  long local_440;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x41c) == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_100693a48(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  if (*(int *)(param_2 + 0x41c) == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_100693abe(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  pcVar1 = (char *)(param_1 + 0x19);
  pcVar2 = (char *)(param_2 + 0x19);
  iVar4 = _strcmp(pcVar1,pcVar2);
  if (iVar4 == 0) {
    bVar8 = true;
    goto LAB_10019055d;
  }
  pcVar6 = pcVar1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    pcVar6 = (char *)_realpath_DARWIN_EXTSN(pcVar1,local_448);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      iVar4 = _strcmp(local_448,pcVar1);
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
    }
  }
  pcVar7 = pcVar2;
  if (*(char *)(param_2 + 0x18) == '\0') {
    pcVar7 = (char *)_realpath_DARWIN_EXTSN(pcVar2,local_858);
    if (pcVar7 != (char *)0x0) {
      iVar4 = _strcmp(local_858,pcVar2);
      if (iVar4 == 0) {
        *(undefined1 *)(param_2 + 0x18) = 1;
      }
      goto LAB_100190497;
    }
LAB_100190526:
    bVar8 = false;
  }
  else {
LAB_100190497:
    if (pcVar6 == (char *)0x0) goto LAB_100190526;
    iVar4 = _strcmp(pcVar6,pcVar7);
    bVar8 = iVar4 == 0;
  }
  if ((param_3 != '\0') && (bVar8 == false)) {
    iVar4 = _lstat_INODE64(pcVar1,local_448);
    if (iVar4 == 0) {
      iVar4 = _lstat_INODE64(pcVar2,local_858);
      if (iVar4 == 0) {
        bVar8 = local_440 == local_850;
        goto LAB_10019055d;
      }
    }
    bVar8 = false;
  }
LAB_10019055d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

