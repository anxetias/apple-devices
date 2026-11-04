// name: FUN_100533b20
// address: 100533b20

undefined8
FUN_100533b20(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4,void *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_8e8 [3];
  undefined4 local_8d0;
  undefined8 local_8c8;
  undefined1 *local_8b8;
  char local_8b0 [80];
  void *local_860;
  undefined1 local_858 [512];
  undefined1 local_658 [512];
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_860 = param_5;
  FUN_1001c62d9(local_8e8,0x38);
  local_8e8[0] = param_2;
  local_8d0 = param_3;
  local_8c8 = param_1;
  local_8b8 = local_658;
  FUN_10017e4d0(local_8e8);
  uVar2 = FUN_10017ecc9(param_1,local_658,local_458,0);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_10017d477(local_458,local_8b0,local_858);
    if ((int)uVar2 != 0) goto LAB_100533c67;
    if (local_8b0[0] == '\0') {
      uVar2 = 0xffffff88;
      goto LAB_100533c67;
    }
    cVar1 = FUN_1001e3edc(local_658,local_858,0);
    if (cVar1 == '\0' && param_4 == '\0') {
      uVar2 = FUN_1001894bc(local_458,local_658,local_458);
      if ((int)uVar2 != 0) goto LAB_100533c67;
    }
  }
  else {
    if (param_4 != '\0') goto LAB_100533c67;
    uVar2 = FUN_100181064(param_1,local_658,local_458);
    if ((int)uVar2 != 0) goto LAB_100533c67;
    cVar1 = FUN_100534b32(local_458);
    if (cVar1 != '\0') {
      FUN_100189139(local_458,0x70707);
    }
  }
  _memcpy(local_860,local_458,0x420);
  uVar2 = 0;
LAB_100533c67:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

