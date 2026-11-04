// name: FUN_1001f65a8
// address: 1001f65a8

undefined8 FUN_1001f65a8(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0xffffff98;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = _malloc(0x1010);
      if (puVar1 == (undefined8 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        return 0xffffff98;
      }
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1[1] = 0xff0;
      param_1[1] = puVar1;
      *param_1 = puVar1;
    }
    if (param_3 != 0) {
      uVar5 = puVar1[1];
      do {
        if (uVar5 == 0) {
          puVar2 = _malloc(0x1010);
          if (puVar2 == (undefined8 *)0x0) {
            *puVar1 = 0;
            return 0xffffff98;
          }
          *puVar2 = 0;
          puVar2[2] = 0;
          puVar2[1] = 0xff0;
          *puVar1 = puVar2;
          param_1[1] = puVar2;
          uVar5 = 0xff0;
          lVar4 = 0;
        }
        else {
          lVar4 = puVar1[2];
          puVar2 = puVar1;
        }
        uVar3 = param_3;
        if (uVar5 < param_3) {
          uVar3 = uVar5;
        }
        uVar3 = uVar3 & 0xffffffff;
        if (uVar3 != 0) {
          uVar5 = 0;
          do {
            *(undefined1 *)((long)puVar2 + uVar5 + lVar4 + 0x20) = *(undefined1 *)(param_2 + uVar5);
            uVar5 = uVar5 + 1;
          } while (uVar3 != uVar5);
          uVar5 = puVar2[1];
          lVar4 = puVar2[2];
        }
        puVar2[2] = lVar4 + uVar3;
        uVar5 = uVar5 - uVar3;
        puVar2[1] = uVar5;
        param_2 = param_2 + uVar3;
        param_3 = param_3 - uVar3;
        puVar1 = puVar2;
      } while (param_3 != 0);
    }
    uVar6 = 0;
  }
  return uVar6;
}

