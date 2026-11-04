// name: FUN_100191e06
// address: 100191e06

ulong FUN_100191e06(int *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  char *pcVar6;
  char local_838 [1040];
  char local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0x504f5358) {
    pcVar6 = (char *)((long)param_1 + 0x19);
    if ((char)param_1[6] == '\0') {
      _strlcpy(local_428,pcVar6,0x401);
      goto LAB_100191e66;
    }
  }
  else {
    uVar5 = FUN_10017de88(param_1,local_428,0x401);
    if ((int)uVar5 != 0) goto LAB_100191ed0;
LAB_100191e66:
    lVar3 = _realpath_DARWIN_EXTSN(local_428,local_838);
    if (lVar3 == 0) {
      piVar4 = ___error();
      uVar2 = FUN_1001eb020(*piVar4);
      uVar5 = 0xffffffd5;
      if (uVar2 != 0) {
        uVar5 = (ulong)uVar2;
      }
      goto LAB_100191ed0;
    }
    if (*param_1 == 0x504f5358) {
      iVar1 = _strcmp((char *)((long)param_1 + 0x19),local_838);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 6) = 1;
      }
    }
    pcVar6 = local_838;
  }
  _strlcpy(param_2,pcVar6,0x401);
  uVar5 = 0;
LAB_100191ed0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

