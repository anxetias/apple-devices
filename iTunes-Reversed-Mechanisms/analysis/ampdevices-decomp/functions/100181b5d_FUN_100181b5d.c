// name: FUN_100181b5d
// address: 100181b5d

void * FUN_100181b5d(undefined8 param_1,undefined4 param_2,char param_3,char param_4,long param_5)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = (void *)FUN_1001c629e(0x690,&DAT_100711c6e);
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)((long)pvVar2 + 0x10) = 0x4d56496d;
    *(undefined4 *)((long)pvVar2 + 0x14) = param_2;
    *(undefined1 *)((long)pvVar2 + 0x680) = 1;
    *(undefined1 *)((long)pvVar2 + 0x682) = 1;
    *(bool *)((long)pvVar2 + 0x685) = param_3 != '\0';
    if (param_5 != 0) {
      FUN_1001bb41a(param_5,(long)pvVar2 + 0x480);
    }
    lVar3 = 0;
    if (*(short *)((long)pvVar2 + 0x480) == 0) {
      lVar3 = (long)pvVar2 + 0x480;
    }
    iVar1 = FUN_10017e137(param_1,(long)pvVar2 + 0x18,lVar3);
    if (iVar1 == 0) {
      FUN_10018bdf3(&DAT_1008c4da0,&DAT_1008c4da8,pvVar2);
      if (param_4 == '\0') {
        return pvVar2;
      }
      FUN_100181f31();
      return pvVar2;
    }
    FUN_10017060f(*(undefined8 *)((long)pvVar2 + 0x688));
    operator_delete(pvVar2);
  }
  return (void *)0x0;
}

