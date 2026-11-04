// name: FUN_1002b8dbb
// address: 1002b8dbb

char FUN_1002b8dbb(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  char *pcVar7;
  uint uVar8;
  char local_428 [256];
  char local_328 [256];
  char local_228 [256];
  char local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c5d69 == '\0') {
    DAT_1008c5d69 = '\x02';
    lVar4 = FUN_1001eb6f8();
    if (lVar4 != 0) {
      pcVar7 = local_128;
      FUN_1001e5e36(lVar4,pcVar7,0x100);
      pcVar5 = local_228;
      local_228[0] = '\0';
      local_328[0] = '\0';
      local_428[0] = '\0';
      bVar6 = true;
      do {
        cVar1 = *pcVar7;
        if (cVar1 == ',') {
          *pcVar5 = '\0';
          pcVar5 = local_428;
        }
        else {
          if (cVar1 == '\0') goto LAB_1002b8ea1;
          if ((byte)(cVar1 - 0x30U) < 10) {
            if (bVar6) {
              *pcVar5 = '\0';
              pcVar5 = local_328;
            }
            *pcVar5 = cVar1;
            bVar6 = false;
            pcVar5 = pcVar5 + 1;
          }
          else {
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
          }
        }
        pcVar7 = pcVar7 + 1;
      } while( true );
    }
  }
LAB_1002b8de2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return (DAT_1008c5d69 == '\x01') + '\x01';
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_1002b8ea1:
  *pcVar5 = '\0';
  FUN_10017060f(lVar4);
  if (((local_228[0] != '\0') && (local_328[0] != '\0')) && (local_428[0] != '\0')) {
    iVar2 = FUN_1001e3338(local_328);
    uVar3 = FUN_1001e3338(local_428);
    cVar1 = FUN_1001df957(local_228,"Macmini",1);
    uVar8 = 0x30001;
    if (cVar1 == '\0') {
      cVar1 = FUN_1001df957(local_228,"MacBook",1);
      if (cVar1 == '\0') {
        cVar1 = FUN_1001df957(local_228,"MacBookAir",1);
        uVar8 = 0x30002;
        if (cVar1 == '\0') {
          cVar1 = FUN_1001df957(local_228,"MacBookPro",1);
          uVar8 = 0x20002;
          if (cVar1 == '\0') {
            cVar1 = FUN_1001df957(local_228,"iMac",1);
            uVar8 = 0x60001;
            if (cVar1 == '\0') goto LAB_1002b8de2;
          }
        }
      }
    }
    if ((iVar2 << 0x10 | uVar3) <= uVar8) {
      DAT_1008c5d69 = '\x01';
    }
  }
  goto LAB_1002b8de2;
}

