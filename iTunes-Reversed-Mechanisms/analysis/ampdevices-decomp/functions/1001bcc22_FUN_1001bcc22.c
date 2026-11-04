// name: FUN_1001bcc22
// address: 1001bcc22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001bcc22(undefined8 param_1,long *param_2,char *param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *puVar7;
  void *local_60;
  void *local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  
  lVar3 = FUN_1001b83f0(param_2);
  FUN_1001a8b4c(&local_60,lVar3 * 3);
  local_38 = local_60;
  if (param_3 != (char *)0x0 || param_4 != (char *)0x0) {
    local_48._0_4_ = _DAT_100711b08;
    local_48._4_4_ = _UNK_100711b0c;
    uStack_40 = _UNK_100711b10;
    uStack_3c = _UNK_100711b14;
    if ((param_3 != (char *)0x0) && (cVar2 = *param_3, cVar2 != '\0')) {
      pcVar6 = "bitset reset argument out of range";
      do {
        param_3 = param_3 + 1;
        uVar5 = (long)cVar2 - 0x21;
        if (0x5d < uVar5) goto LAB_1001bce67;
        bVar1 = (byte)uVar5 & 0x3f;
        (&local_48)[uVar5 >> 6] =
             (&local_48)[uVar5 >> 6] & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
        cVar2 = *param_3;
      } while (cVar2 != '\0');
    }
    if ((param_4 != (char *)0x0) && (cVar2 = *param_4, cVar2 != '\0')) {
      pcVar6 = "bitset set argument out of range";
      do {
        param_4 = param_4 + 1;
        uVar5 = (long)cVar2 - 0x21;
        if (0x5d < uVar5) {
LAB_1001bce67:
                    /* WARNING: Subroutine does not return */
          FUN_1001bd5b8(pcVar6);
        }
        (&local_48)[uVar5 >> 6] = (&local_48)[uVar5 >> 6] | 1L << ((byte)uVar5 & 0x3f);
        cVar2 = *param_4;
      } while (cVar2 != '\0');
    }
    lVar3 = param_2[1];
    if (lVar3 == 0) {
      puVar7 = &DAT_100711b02;
      if (*param_2 == 0) {
        puVar4 = &DAT_100711b02;
      }
      else {
        FUN_1001b87d0(param_2);
        lVar3 = param_2[1];
        if (lVar3 != 0) goto LAB_1001bcd4d;
        puVar4 = &DAT_100711b02;
        if (*param_2 != 0) {
          FUN_1001b87d0(param_2);
          lVar3 = param_2[1];
          puVar7 = &DAT_100711b02;
          puVar4 = &DAT_100711b02;
          if (lVar3 != 0) goto LAB_1001bcd51;
        }
      }
    }
    else {
LAB_1001bcd4d:
      puVar7 = (undefined *)(lVar3 + 0xc);
LAB_1001bcd51:
      puVar4 = (undefined *)(lVar3 + 0xc);
    }
    lVar3 = FUN_1001b83f0(param_2);
    FUN_1001bcad3(puVar7,puVar4 + lVar3,&local_48,&local_38);
    goto LAB_1001bcd76;
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    puVar7 = &DAT_100711b02;
    if (*param_2 == 0) {
      puVar4 = &DAT_100711b02;
    }
    else {
      FUN_1001b87d0(param_2);
      lVar3 = param_2[1];
      if (lVar3 != 0) goto LAB_1001bcc74;
      puVar4 = &DAT_100711b02;
      if (*param_2 != 0) {
        FUN_1001b87d0(param_2);
        lVar3 = param_2[1];
        puVar7 = &DAT_100711b02;
        puVar4 = &DAT_100711b02;
        if (lVar3 != 0) goto LAB_1001bcc78;
      }
    }
  }
  else {
LAB_1001bcc74:
    puVar7 = (undefined *)(lVar3 + 0xc);
LAB_1001bcc78:
    puVar4 = (undefined *)(lVar3 + 0xc);
  }
  lVar3 = FUN_1001b83f0(param_2);
  FUN_1001bcad3(puVar7,puVar4 + lVar3,&DAT_100711b08,&local_38);
LAB_1001bcd76:
  FUN_1001b7a9a(param_1,local_60,(long)local_38 - (long)local_60);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  return param_1;
}

