// name: FUN_100181c45
// address: 100181c45

void FUN_100181c45(void)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_38;
  
  pvVar4 = (void *)FUN_100181923();
  if (pvVar4 != (void *)0x0) {
    do {
      pvVar5 = (void *)FUN_100181973(pvVar4);
      if (*(char *)((long)pvVar4 + 0x680) == '\0') {
        if (*(char *)((long)pvVar4 + 0x686) == '\0') {
          FUN_10018bc8f(&DAT_1008c4da0,&DAT_1008c4da8,pvVar4);
        }
        FUN_1001c62d9(&local_58,0x28);
        local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)((long)pvVar4 + 0x14));
        local_50 = (long)pvVar4 + 0x480;
        if (DAT_1008c4db0 != (long *)0x0) {
          plVar6 = DAT_1008c4db0;
          do {
            plVar2 = (long *)*plVar6;
            uVar3 = FUN_100181e82((long)pvVar4 + 0x18);
            if ((*(uint *)(plVar6 + 2) & uVar3) != 0) {
              (*(code *)plVar6[3])(plVar6,0x756d6e74,&local_58,plVar6[5]);
            }
            plVar6 = plVar2;
          } while (plVar2 != (long *)0x0);
        }
        *(undefined1 *)((long)pvVar4 + 0x684) = 1;
      }
      if (*(char *)((long)pvVar4 + 0x682) == '\x01') {
        *(undefined1 *)((long)pvVar4 + 0x682) = 0;
        FUN_1001c62d9(&local_58,0x28);
        lVar1 = (long)pvVar4 + 0x18;
        local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)((long)pvVar4 + 0x14));
        local_40 = (long)pvVar4 + 0x480;
        local_38 = *(undefined1 *)((long)pvVar4 + 0x687);
        local_58 = lVar1;
        local_50 = lVar1;
        plVar6 = DAT_1008c4db0;
        while (plVar2 = plVar6, plVar2 != (long *)0x0) {
          plVar6 = (long *)*plVar2;
          uVar3 = FUN_100181e82(lVar1);
          if ((*(uint *)(plVar2 + 2) & uVar3) != 0) {
            (*(code *)plVar2[3])(plVar2,0x6d6e7420,&local_58,plVar2[5]);
          }
        }
      }
      else if (*(char *)((long)pvVar4 + 0x683) == '\x01') {
        *(undefined1 *)((long)pvVar4 + 0x682) = 0;
        FUN_1001c62d9(&local_58,0x28);
        local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)((long)pvVar4 + 0x14));
        local_48 = (long)pvVar4 + 0x480;
        local_58 = (long)pvVar4 + 0x18;
        plVar6 = DAT_1008c4db0;
        while (plVar2 = plVar6, plVar2 != (long *)0x0) {
          plVar6 = (long *)*plVar2;
          uVar3 = FUN_100181e82((long)pvVar4 + 0x18);
          if ((*(uint *)(plVar2 + 2) & uVar3) != 0) {
            (*(code *)plVar2[3])(plVar2,0x726e616d,&local_58,plVar2[5]);
          }
        }
      }
      if (*(char *)((long)pvVar4 + 0x680) == '\x01') {
        *(undefined2 *)((long)pvVar4 + 0x682) = 0;
      }
      else if (*(char *)((long)pvVar4 + 0x684) == '\x01') {
        if (*(char *)((long)pvVar4 + 0x686) == '\0') {
          FUN_10017060f(*(undefined8 *)((long)pvVar4 + 0x688));
          operator_delete(pvVar4);
        }
      }
      else {
        pvVar5 = (void *)FUN_100181923();
      }
      pvVar4 = pvVar5;
    } while (pvVar5 != (void *)0x0);
  }
  return;
}

