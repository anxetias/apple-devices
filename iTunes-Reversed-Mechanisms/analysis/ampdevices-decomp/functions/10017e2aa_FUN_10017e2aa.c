// name: FUN_10017e2aa
// address: 10017e2aa

ulong FUN_10017e2aa(undefined8 param_1)

{
  char cVar1;
  ushort *puVar2;
  ulong uVar3;
  long lVar4;
  short local_438 [256];
  ushort local_238 [260];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008900c2 == '\0') {
    puVar2 = &DAT_1008900d0;
    lVar4 = 0;
    do {
      FUN_1001e04f5((long)&DAT_10070e590 + (long)*(int *)((long)&DAT_10070e590 + lVar4),puVar2);
      if (DAT_1008900c4 < *puVar2) {
        DAT_1008900c4 = *puVar2;
      }
      lVar4 = lVar4 + 4;
      puVar2 = puVar2 + 0x20;
    } while (lVar4 != 0x58);
    DAT_1008900c2 = '\x01';
  }
  FUN_1001e40a7(param_1,local_238,local_438);
  if (local_238[0] <= DAT_1008900c4) {
    lVar4 = 0;
    do {
      cVar1 = FUN_1001e3edc(local_238,(long)&DAT_1008900d0 + lVar4,1);
      if (cVar1 != '\0') {
        local_238[local_238[0]] = 0x5f;
        FUN_1001e1c39(local_238,param_1);
        uVar3 = CONCAT71((int7)((ulong)local_238 >> 8),1);
        if (local_438[0] != 0) {
          FUN_1001e26e1(".",param_1);
          FUN_1001e1890(local_438,param_1);
        }
        goto LAB_10017e374;
      }
      lVar4 = lVar4 + 0x40;
    } while (lVar4 != 0x580);
  }
  uVar3 = 0;
LAB_10017e374:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

