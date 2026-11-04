// name: FUN_100537a0c
// address: 100537a0c

undefined8 FUN_100537a0c(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_10032046f(**(undefined8 **)(param_1 + 8),*(undefined1 *)*param_2,1,
                        *(undefined8 *)(param_1 + 0x10),0);
  if (iVar2 == 0) {
    cVar1 = FUN_100183bb2(*(undefined8 *)(param_1 + 0x10),**(undefined8 **)(param_1 + 0x18));
    if (cVar1 != '\0') {
      **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
      uVar3 = 0xffffff80;
    }
  }
  return uVar3;
}

