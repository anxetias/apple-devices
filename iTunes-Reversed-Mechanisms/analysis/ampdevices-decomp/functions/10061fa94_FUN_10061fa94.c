// name: FUN_10061fa94
// address: 10061fa94

undefined8 FUN_10061fa94(long param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(undefined8 **)(param_1 + 0x10))[1] != *param_2) {
    lVar2 = FUN_10048584d(*param_2,**(undefined8 **)(param_1 + 0x10),0);
    if (lVar2 != 0) {
      uVar1 = FUN_10061f473(*(undefined8 *)(param_1 + 8),lVar2);
      **(undefined1 **)(param_1 + 0x18) = uVar1;
    }
  }
  uVar3 = 0x2349;
  if (**(char **)(param_1 + 0x18) == '\0') {
    uVar3 = 0;
  }
  return uVar3;
}

