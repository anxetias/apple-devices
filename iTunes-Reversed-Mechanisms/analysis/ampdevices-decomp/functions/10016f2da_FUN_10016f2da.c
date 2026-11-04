// name: FUN_10016f2da
// address: 10016f2da

undefined8 FUN_10016f2da(long *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined1 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  ulong uVar7;
  
  lVar3 = *param_1;
  puVar4 = *(undefined1 **)(lVar3 + 0x18);
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar4 + 1) {
    FUN_10016d504(lVar3,1);
    puVar4 = *(undefined1 **)(lVar3 + 0x18);
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar4 + 1;
  *puVar4 = 0x22;
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      bVar1 = *(byte *)(param_2 + uVar7);
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      lVar3 = *param_1;
      pbVar6 = *(byte **)(lVar3 + 0x18);
      if (cVar2 == '\0') {
        if (*(byte **)(lVar3 + 0x20) <= pbVar6 + 1) {
          FUN_10016d504(lVar3,1);
          pbVar6 = *(byte **)(lVar3 + 0x18);
        }
        *(byte **)(lVar3 + 0x18) = pbVar6 + 1;
        *pbVar6 = bVar1;
      }
      else {
        if (*(byte **)(lVar3 + 0x20) <= pbVar6 + 1) {
          FUN_10016d504(lVar3,1);
          pbVar6 = *(byte **)(lVar3 + 0x18);
        }
        *(byte **)(lVar3 + 0x18) = pbVar6 + 1;
        *pbVar6 = 0x5c;
        lVar3 = *param_1;
        pcVar5 = *(char **)(lVar3 + 0x18);
        if (*(char **)(lVar3 + 0x20) <= pcVar5 + 1) {
          FUN_10016d504(lVar3,1);
          pcVar5 = *(char **)(lVar3 + 0x18);
        }
        *(char **)(lVar3 + 0x18) = pcVar5 + 1;
        *pcVar5 = cVar2;
        if (cVar2 == 'u') {
          lVar3 = *param_1;
          puVar4 = *(undefined1 **)(lVar3 + 0x18);
          if (*(undefined1 **)(lVar3 + 0x20) <= puVar4 + 1) {
            FUN_10016d504(lVar3,1);
            puVar4 = *(undefined1 **)(lVar3 + 0x18);
          }
          *(undefined1 **)(lVar3 + 0x18) = puVar4 + 1;
          *puVar4 = 0x30;
          lVar3 = *param_1;
          puVar4 = *(undefined1 **)(lVar3 + 0x18);
          if (*(undefined1 **)(lVar3 + 0x20) <= puVar4 + 1) {
            FUN_10016d504(lVar3,1);
            puVar4 = *(undefined1 **)(lVar3 + 0x18);
          }
          *(undefined1 **)(lVar3 + 0x18) = puVar4 + 1;
          *puVar4 = 0x30;
          lVar3 = *param_1;
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
          pcVar5 = *(char **)(lVar3 + 0x18);
          if (*(char **)(lVar3 + 0x20) <= pcVar5 + 1) {
            FUN_10016d504(lVar3,1);
            pcVar5 = *(char **)(lVar3 + 0x18);
          }
          *(char **)(lVar3 + 0x18) = pcVar5 + 1;
          *pcVar5 = cVar2;
          lVar3 = *param_1;
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 & 0xf];
          pcVar5 = *(char **)(lVar3 + 0x18);
          if (*(char **)(lVar3 + 0x20) <= pcVar5 + 1) {
            FUN_10016d504(lVar3,1);
            pcVar5 = *(char **)(lVar3 + 0x18);
          }
          *(char **)(lVar3 + 0x18) = pcVar5 + 1;
          *pcVar5 = cVar2;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
  }
  lVar3 = *param_1;
  puVar4 = *(undefined1 **)(lVar3 + 0x18);
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar4 + 1) {
    FUN_10016d504(lVar3,1);
    puVar4 = *(undefined1 **)(lVar3 + 0x18);
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar4 + 1;
  *puVar4 = 0x22;
  return CONCAT71((int7)((ulong)puVar4 >> 8),1);
}

