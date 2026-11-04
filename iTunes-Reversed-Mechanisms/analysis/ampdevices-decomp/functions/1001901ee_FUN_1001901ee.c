// name: FUN_1001901ee
// address: 1001901ee

int FUN_1001901ee(long param_1,long param_2,undefined8 param_3,void *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [24];
  undefined1 local_438;
  undefined1 local_437 [1031];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_460);
  cVar1 = FUN_1001b8428(param_3);
  if (cVar1 == '\0') {
    FUN_1001b8172(local_460,param_3);
  }
  else {
    FUN_1001b7b04(local_470,param_1 + 0x19);
    FUN_10018a4fc(local_480,local_470,0);
    FUN_1001b80b2(local_460,local_480);
    FUN_1001b7a50(local_480);
    FUN_1001b7a50(local_470);
  }
  uVar4 = FUN_1001b83ae(local_460);
  iVar2 = FUN_10019212e(param_2 + 0x19,uVar4,local_450);
  if (iVar2 == 0) {
    local_438 = *(undefined1 *)(param_2 + 0x18);
  }
  iVar2 = _open((char *)(param_1 + 0x19),0);
  if (iVar2 < 0) {
    piVar5 = ___error();
    iVar3 = FUN_1001eb020(*piVar5);
  }
  else {
    iVar3 = _fclonefileat(iVar2,0xfffffffe,local_437,1);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      piVar5 = ___error();
      iVar3 = FUN_1001eb020(*piVar5);
    }
    _close(iVar2);
  }
  if ((param_4 != (void *)0x0) && (iVar3 == 0)) {
    _memcpy(param_4,local_450,0x420);
  }
  FUN_1001b7a50(local_460);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

