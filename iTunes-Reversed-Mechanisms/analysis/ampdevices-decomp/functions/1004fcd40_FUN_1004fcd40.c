// name: FUN_1004fcd40
// address: 1004fcd40

bool FUN_1004fcd40(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_4cd8 [4152];
  byte local_3ca0;
  undefined8 local_3678;
  undefined8 uStack_3670;
  uint local_365c;
  undefined1 local_2970;
  long local_30;
  
  local_30 = 0x1004fcd55;
  lVar2 = FUN_100108310();
  lVar2 = -lVar2;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 != 0x4d46494c) && (param_1 != 0x46494c45)) || (param_2 == 0)) {
    bVar4 = false;
    goto LAB_1004fcdb6;
  }
  *(undefined8 *)((long)&local_30 + lVar2) = 0x1004fcd86;
  iVar1 = FUN_1004e9a46(param_2);
  bVar4 = false;
  if (iVar1 < 0x69706120) {
    if (iVar1 == 0x4d344120) {
      local_3678 = 0;
      uStack_3670 = 0;
      *(undefined8 *)((long)&local_30 + lVar2) = 0x1004fcdfb;
      FUN_1003af743(local_4cd8);
      *(undefined8 *)((long)&local_30 + lVar2) = 0x1004fce03;
      FUN_1003af7fe(&local_3678);
      *(undefined8 *)((long)&local_30 + lVar2) = 0x1004fce1c;
      iVar1 = FUN_1005353ef(param_2,local_4cd8,&local_3678,0,0x800);
      bVar4 = false;
      if (iVar1 == 0) {
        if (local_365c == 0) {
          *(undefined8 *)((long)&local_30 + lVar2) = 0x1004fce36;
          local_365c = FUN_10031f884(local_2970);
        }
        uVar3 = local_365c | 2;
        if ((local_3ca0 & 0x40) == 0) {
          uVar3 = local_365c;
        }
        if ((local_365c & 0xce2) != 0) {
          uVar3 = local_365c;
        }
        bVar4 = uVar3 == 0x4000 || uVar3 == 0x1000000;
      }
      goto LAB_1004fcdb6;
    }
    if (iVar1 != 0x4d345220) goto LAB_1004fcdb6;
  }
  else if ((iVar1 != 0x69706720) && (bVar4 = false, iVar1 != 0x69706120)) goto LAB_1004fcdb6;
  bVar4 = true;
LAB_1004fcdb6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_30 + lVar2) = &UNK_1004fce6d;
    ___stack_chk_fail();
  }
  return bVar4;
}

