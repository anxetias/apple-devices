// name: FUN_10015b5d1
// address: 10015b5d1

undefined8 FUN_10015b5d1(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined2 uVar9;
  
  cVar3 = FUN_10015b3fc();
  uVar7 = 0;
  if (cVar3 != '\0') {
    cVar3 = FUN_10015b6c3(param_1,0,1);
    if (cVar3 != '\0') {
      if (param_1 == 0) {
        uVar8 = 0;
        uVar9 = 0;
      }
      else {
        lVar5 = FUN_1001c627e(param_1);
        uVar9 = *(undefined2 *)(lVar5 + 0x18);
        lVar5 = FUN_1001c627e(param_1);
        uVar1 = *(ushort *)(lVar5 + 8) << 8;
        uVar2 = *(ushort *)(lVar5 + 8) >> 8;
        uVar8 = uVar1 | uVar2;
        lVar5 = FUN_1001c627e(param_1);
        *(ushort *)(lVar5 + 8) = uVar2 << 8 | (uVar1 & 0x7fff) >> 8;
        lVar5 = FUN_1001c627e(param_1);
        *(undefined2 *)(lVar5 + 0x18) = 0;
      }
      uVar4 = FUN_1001c5d9c(param_1);
      uVar7 = DAT_1008c4d90;
      uVar6 = FUN_1001c627e(param_1);
      uVar7 = FUN_100170dc5(uVar7,uVar6,uVar4);
      if (param_1 != 0) {
        lVar5 = FUN_1001c627e(param_1);
        *(undefined2 *)(lVar5 + 0x18) = uVar9;
        lVar5 = FUN_1001c627e(param_1);
        *(ushort *)(lVar5 + 8) = uVar8 << 8 | uVar8 >> 8;
      }
    }
  }
  return uVar7;
}

