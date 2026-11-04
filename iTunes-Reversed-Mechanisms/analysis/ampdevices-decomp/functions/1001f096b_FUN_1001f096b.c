// name: FUN_1001f096b
// address: 1001f096b

undefined8 FUN_1001f096b(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = 0xffffff9c;
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (lVar2 = *(long *)(param_1 + 0x80) + 1,
       *(long *)(param_1 + 0x68) == 0xffff || lVar2 != *(long *)(param_1 + 0x68))) {
      *(long *)(param_1 + 0x88) =
           *(long *)(param_1 + 0x88) +
           *(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0x100) + 0x2e
      ;
      *(long *)(param_1 + 0x80) = lVar2;
      uVar1 = FUN_1001f0322(param_1,param_1 + 0xb0,param_1 + 0x138,0,0,0,0,0,0);
      *(ulong *)(param_1 + 0x90) = (ulong)((int)uVar1 == 0);
    }
    return uVar1;
  }
  return 0xffffff9a;
}

