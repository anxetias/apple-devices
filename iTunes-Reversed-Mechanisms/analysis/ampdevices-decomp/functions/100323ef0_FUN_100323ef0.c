// name: FUN_100323ef0
// address: 100323ef0

undefined8 FUN_100323ef0(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = (undefined1 *)*param_2;
  *(undefined8 *)(puVar1 + 8) = **(undefined8 **)(param_1 + 8);
  if ((*(byte *)(**(long **)(param_1 + 0x10) + 0x1bb0) & 1) != 0) {
    lVar4 = FUN_1002796f8(*puVar1,1);
    lVar2 = *(long *)(lVar4 + 8);
    lVar3 = **(long **)(param_1 + 8);
    *(long *)(lVar4 + 8) = lVar3;
    if (lVar2 != lVar3 && lVar2 != 0) {
      FUN_100279998(*puVar1);
    }
  }
  return 0;
}

