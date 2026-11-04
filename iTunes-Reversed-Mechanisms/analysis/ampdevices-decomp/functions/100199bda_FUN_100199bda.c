// name: FUN_100199bda
// address: 100199bda

undefined8 FUN_100199bda(long param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  
  pcVar3 = (char *)FUN_1001dfadb(*(undefined8 *)(param_1 + 8));
  uVar7 = DAT_1008c4d90;
  if (pcVar3 == (char *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_100697fcc(uVar7);
    }
    FUN_1001782e9(0,0);
    pcVar3 = (char *)0x0;
  }
  else {
    sVar4 = _strlen(pcVar3);
    lVar5 = FUN_10017444a(uVar7,pcVar3,sVar4,0x8000100,0);
    if (lVar5 != 0) {
      FUN_1001c64c1(pcVar3);
      pcVar10 = &cf_POST;
      if (*(long *)(param_1 + 0x40) == 0) {
        pcVar10 = &cf_GET;
      }
      lVar6 = FUN_100171969(DAT_1008c4d90,pcVar10,lVar5,
                            *(undefined8 *)PTR__kCFHTTPVersion1_1_10082d5c8);
      if (lVar6 == 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          FUN_100697ee0(uVar7);
        }
        bVar1 = false;
        FUN_1001782e9(0,0);
        uVar7 = 0xffffff94;
        lVar6 = 0;
      }
      else {
        lVar9 = param_1 + 0x28;
        cVar2 = FUN_1001b8428(lVar9);
        if (cVar2 == '\0') {
          uVar7 = FUN_1001b83ae(lVar9);
          uVar8 = FUN_1001b83f0(lVar9);
          FUN_100171b94(lVar6,uVar7,uVar8);
        }
        cVar2 = FUN_1001b8428(param_1 + 0x18);
        if (cVar2 == '\0') {
          FUN_10016939d(lVar6,&cf_User_Agent,param_1 + 0x18);
        }
        if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
          FUN_100171b23(lVar6,&cf_Accept,&cf____);
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar9 = FUN_1001736b8(DAT_1008c4d90,0,&cf_bytes__llu_);
          if (lVar9 == 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              FUN_100697e6a(uVar7);
            }
            bVar1 = false;
            FUN_1001782e9(0,0);
            uVar7 = 0xffffff94;
            goto LAB_100199e22;
          }
          FUN_100171b23(lVar6,&cf_Range,lVar9);
          FUN_10017060f(lVar9);
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          FUN_1001719fb(lVar6);
        }
        *param_2 = lVar6;
        uVar7 = 0;
        bVar1 = true;
      }
LAB_100199e22:
      pcVar3 = (char *)0x0;
      goto LAB_100199e25;
    }
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_100697f56(uVar7);
    }
    FUN_1001782e9(0,0);
  }
  lVar6 = 0;
  bVar1 = false;
  uVar7 = 0xffffff94;
  lVar5 = 0;
LAB_100199e25:
  FUN_1001c64c1(pcVar3);
  FUN_10017060f(lVar5);
  if (!bVar1) {
    FUN_10017060f(lVar6);
    *param_2 = 0;
  }
  return uVar7;
}

