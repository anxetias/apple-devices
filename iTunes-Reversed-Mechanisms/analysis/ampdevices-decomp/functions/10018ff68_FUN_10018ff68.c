// name: FUN_10018ff68
// address: 10018ff68

undefined4 FUN_10018ff68(long param_1,long param_2,byte param_3,void *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 local_460 [16];
  undefined1 local_450 [24];
  undefined1 local_438;
  undefined1 local_437 [1031];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017fbfb(param_2);
  if (cVar1 == '\0') {
    uVar3 = 0xfffffa81;
  }
  else {
    cVar1 = FUN_10017ec13(param_1,param_2);
    if (cVar1 == '\0') {
      uVar3 = 0xfffffae9;
    }
    else {
      FUN_1001b7b04(local_450,param_1 + 0x19);
      FUN_10018a4fc(local_460,local_450,0);
      FUN_1001b7a50(local_450);
      uVar4 = FUN_1001b83ae(local_460);
      iVar2 = FUN_10019212e(param_2 + 0x19,uVar4,local_450);
      if (iVar2 == 0) {
        local_438 = *(undefined1 *)(param_2 + 0x18);
      }
      iVar2 = _renamex_np(param_1 + 0x19,local_437,(ulong)(param_3 ^ 1) << 4);
      if (iVar2 == 0) {
        uVar3 = 0;
        if (param_4 != (void *)0x0) {
          _memcpy(param_4,local_450,0x420);
        }
      }
      else {
        piVar5 = ___error();
        uVar3 = FUN_1001eb020(*piVar5);
      }
      FUN_1001b7a50(local_460);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

