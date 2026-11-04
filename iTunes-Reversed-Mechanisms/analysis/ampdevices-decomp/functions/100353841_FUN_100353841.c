// name: FUN_100353841
// address: 100353841

undefined1 FUN_100353841(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long local_440 [132];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(int *)(param_1 + 0x4ee8) != 0) || (*(char *)(param_1 + 0x3a2) != '\0')) {
    cVar1 = FUN_1005d1e25(param_2);
    uVar6 = 1;
    if (cVar1 != '\0') goto LAB_100353933;
    uVar3 = FUN_1004744bf(param_2,0);
    if ((uVar3 & 0x200004) != 0) {
      lVar4 = FUN_1002ba707(param_2);
      if (lVar4 == 0) goto LAB_1003538ea;
      FUN_1004814a5(local_440,*(undefined8 *)(lVar4 + 8));
      if (local_440[0] == 0) {
        FUN_1001a85d4(local_440);
        goto LAB_1003538ea;
      }
      FUN_10048142e(param_2,local_440);
LAB_1003538d0:
      FUN_1001a85d4(local_440);
      goto LAB_100353933;
    }
LAB_1003538ea:
    uVar3 = FUN_1004744bf(param_2,0);
    if ((uVar3 & 8) != 0) {
      if (param_2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0x10);
      }
      cVar1 = FUN_100316e33(uVar5);
      if (cVar1 != '\0') {
        lVar4 = FUN_100597c13(param_2,0);
        if (lVar4 != 0) {
          iVar2 = FUN_1002b4324(lVar4,local_440);
          if (iVar2 == 0) {
            lVar4 = FUN_100230ca1(local_440);
            if (lVar4 != 0) {
              FUN_1001a78d6(local_440,lVar4);
              FUN_10048142e(param_2,local_440);
              goto LAB_1003538d0;
            }
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_100353933:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

