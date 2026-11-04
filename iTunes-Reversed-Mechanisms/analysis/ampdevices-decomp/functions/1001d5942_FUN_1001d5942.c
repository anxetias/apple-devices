// name: FUN_1001d5942
// address: 1001d5942

int FUN_1001d5942(undefined8 *param_1,undefined4 param_2,void *param_3,char param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  puVar7 = (undefined4 *)FUN_1001c6429(0x9e0);
  if (puVar7 == (undefined4 *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      FUN_1006b3b50(uVar8);
    }
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  *puVar7 = 0x7374726d;
  puVar7[0x26] = param_2;
  puVar2 = puVar7 + 0x28;
  _memcpy(puVar2,param_3,0x420);
  FUN_1001c23b3(puVar7 + 0x260);
  FUN_1001c23b3(puVar7 + 0x262);
  FUN_1001c23b3(puVar7 + 0x264);
  iVar6 = FUN_1001e9c3e();
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      puVar1 = puVar7 + 0x14;
      iVar6 = FUN_1001e9c3e(puVar1);
      if (iVar6 != -0x80) {
        if (iVar6 == 0) {
          FUN_1001eaba7(puVar7 + 0x266,puVar1);
          FUN_1001eaba7(puVar7 + 0x26e,puVar1);
          switch(puVar7[0x26]) {
          case 1:
            iVar6 = FUN_10017cc65(puVar2,0x64617461,(param_5 & 7) << 8 | (int)param_4,puVar7 + 0x130
                                 );
            break;
          case 2:
            iVar6 = FUN_1001d8ee4(puVar7 + 0x130,puVar2,param_5);
            break;
          case 3:
            iVar6 = FUN_1001d4230(puVar7 + 0x130,puVar2);
            break;
          case 4:
            iVar6 = FUN_1001da171(puVar7 + 0x130,puVar2,param_5);
            break;
          default:
            FUN_1001e9d75(puVar1);
            iVar6 = -0x32;
            goto LAB_1001d5b68;
          }
          bVar3 = false;
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          bVar3 = true;
          if (cVar5 != '\0') {
            FUN_1006b3a78(iVar6,uVar8);
          }
        }
        bVar4 = false;
        goto LAB_1001d5b35;
      }
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      bVar3 = true;
      if (cVar5 != '\0') {
        FUN_1006b3ae4(iVar6,uVar8);
      }
      bVar4 = true;
LAB_1001d5b35:
      if (iVar6 == 0) {
        iVar6 = 0;
        goto LAB_1001d5b7c;
      }
      if (!bVar3) {
        FUN_1001e9d75(puVar7 + 0x14);
      }
      if (bVar4) goto LAB_1001d5b71;
    }
LAB_1001d5b68:
    FUN_1001e9d75(puVar7 + 2);
  }
LAB_1001d5b71:
  FUN_1001c64c1(puVar7);
  puVar7 = (undefined4 *)0x0;
LAB_1001d5b7c:
  *param_1 = puVar7;
  return iVar6;
}

