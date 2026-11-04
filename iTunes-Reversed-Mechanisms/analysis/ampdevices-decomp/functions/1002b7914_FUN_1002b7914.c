// name: FUN_1002b7914
// address: 1002b7914

undefined1  [16] FUN_1002b7914(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar4 = (undefined8 *)(param_1 + 8);
  do {
    puVar2 = puVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1002b7947;
    puVar2 = puVar3;
    if ((ulong)puVar3[4] <= param_2) {
      if (param_2 <= (ulong)puVar3[4]) {
        for (puVar1 = (undefined8 *)*puVar3; puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[(ulong)puVar1[4] < param_2]) {
          if ((ulong)puVar1[4] >= param_2) {
            puVar2 = puVar1;
          }
        }
        for (puVar3 = (undefined8 *)puVar3[1]; puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)puVar3[(ulong)puVar3[4] <= param_2]) {
          if (param_2 < (ulong)puVar3[4]) {
            puVar4 = puVar3;
          }
        }
LAB_1002b7947:
        auVar5._8_8_ = puVar4;
        auVar5._0_8_ = puVar2;
        return auVar5;
      }
      puVar3 = puVar3 + 1;
      puVar2 = puVar4;
    }
    puVar3 = (undefined8 *)*puVar3;
    puVar4 = puVar2;
  } while( true );
}

