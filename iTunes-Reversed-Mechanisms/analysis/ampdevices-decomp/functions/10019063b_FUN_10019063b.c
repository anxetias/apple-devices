// name: FUN_10019063b
// address: 10019063b

int FUN_10019063b(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  char *pcVar6;
  undefined1 local_8f0 [80];
  undefined1 local_8a0 [88];
  char local_848 [2080];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_8a0,0x878);
  FUN_10018dce1(param_1 + 0x19,param_2);
  pcVar1 = (char *)(param_2 + 0x19);
  iVar3 = _statfs_INODE64(pcVar1,local_8a0);
  if (iVar3 == 0) {
    sVar5 = _strlen(pcVar1);
    if ((sVar5 != 1) && (*(char *)(param_2 + 0x18 + sVar5) == '/')) {
      pcVar6 = pcVar1 + sVar5;
      do {
        pcVar6[-1] = '\0';
        pcVar2 = pcVar6 + -2;
        pcVar6 = pcVar6 + -1;
      } while (*pcVar2 == '/');
    }
    iVar3 = _strcmp(local_848,pcVar1);
    if (iVar3 != 0) goto LAB_1001906ea;
LAB_100190751:
    iVar3 = -0x78;
  }
  else {
    piVar4 = ___error();
    iVar3 = FUN_1001eb020(*piVar4);
    if (iVar3 == 0) {
LAB_1001906ea:
      sVar5 = _strlen(pcVar1);
      if (sVar5 != 0) {
        pcVar6 = (char *)(param_2 + 0x18 + sVar5);
        if (0 < (long)sVar5) {
          do {
            if (*pcVar6 != '/') break;
            *pcVar6 = '\0';
            pcVar6 = pcVar6 + -1;
          } while (pcVar1 <= pcVar6);
        }
        for (; (pcVar1 <= pcVar6 && (*pcVar6 != '/')); pcVar6 = pcVar6 + -1) {
          *pcVar6 = '\0';
        }
        for (; (pcVar1 < pcVar6 && (*pcVar6 == '/')); pcVar6 = pcVar6 + -1) {
          *pcVar6 = '\0';
        }
      }
      iVar3 = FUN_10017d477(param_2,local_8f0,0);
      if (iVar3 == -0x2b) goto LAB_100190751;
      if (iVar3 == 0) goto LAB_100190764;
    }
  }
  ___bzero(param_2,0x420);
LAB_100190764:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

