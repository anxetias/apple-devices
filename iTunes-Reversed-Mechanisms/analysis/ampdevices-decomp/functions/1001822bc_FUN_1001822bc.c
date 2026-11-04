// name: FUN_1001822bc
// address: 1001822bc

void FUN_1001822bc(undefined8 *param_1,char param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined4 local_48 [2];
  long local_40;
  
  puVar4 = &DAT_1008c4db0;
  do {
    puVar4 = (undefined8 *)*puVar4;
    if (puVar4 == (undefined8 *)0x0) break;
  } while (puVar4 != param_1);
  if (puVar4 != (undefined8 *)0x0) {
    if ((param_2 != '\0') && (lVar2 = FUN_100181923(), lVar2 != 0)) {
      do {
        uVar1 = FUN_100181e82(lVar2 + 0x18);
        if ((*(uint *)(puVar4 + 2) & uVar1) != 0) {
          FUN_1001c62d9(local_48,0x28);
          local_48[0] = *(undefined4 *)(lVar2 + 0x14);
          local_40 = lVar2 + 0x480;
          (*(code *)puVar4[3])(puVar4,0x756d6e74,local_48,puVar4[5]);
        }
        lVar2 = FUN_100181973(lVar2);
      } while (lVar2 != 0);
    }
    FUN_10018bf08(&DAT_1008c4db0,&DAT_1008c4db8,puVar4);
    operator_delete(puVar4);
  }
  if (DAT_1008c4db0 == 0) {
    pvVar3 = (void *)FUN_100181923();
    while (pvVar3 != (void *)0x0) {
      FUN_10018bc8f(&DAT_1008c4da0,&DAT_1008c4da8,pvVar3);
      FUN_10017060f(*(undefined8 *)((long)pvVar3 + 0x688));
      operator_delete(pvVar3);
      pvVar3 = (void *)FUN_100181923();
    }
  }
  return;
}

