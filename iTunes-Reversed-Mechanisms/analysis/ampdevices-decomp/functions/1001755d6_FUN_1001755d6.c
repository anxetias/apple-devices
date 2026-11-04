// name: FUN_1001755d6
// address: 1001755d6

/* WARNING: Removing unreachable block (ram,0x000100175716) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001755d6(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  uint local_34;
  
  iVar3 = FUN_1001752d4();
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      lVar4 = FUN_10015b880(param_1,param_2);
      if (lVar4 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_100681b40(uVar6);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x32;
      }
      else {
        FUN_10015b51c(lRam0000000000000018);
        iVar3 = 0;
        lRam0000000000000018 = lVar4;
        sVar2 = FUN_10015b9d1(lVar4,0,0x63686170);
        iRam0000000000000014 = (int)sVar2;
        pvVar5 = (void *)FUN_10015c089(lRam0000000000000018,0,0x68656472,1,&local_34);
        if (pvVar5 != (void *)0x0) {
          FUN_1001c6395(8,8,0);
          if (8 < local_34) {
            local_34 = 8;
          }
          _memcpy((void *)0x8,pvVar5,(ulong)local_34);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uRam0000000000000008;
          auVar7 = pshufb(auVar7,_DAT_10070e4b0);
          uRam0000000000000008 = auVar7._0_8_;
        }
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_100681bb6(iVar3,uVar6);
      }
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  *param_3 = 0;
  return iVar3;
}

