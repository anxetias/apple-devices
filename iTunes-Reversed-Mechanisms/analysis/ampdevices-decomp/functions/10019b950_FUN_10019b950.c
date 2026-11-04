// name: FUN_10019b950
// address: 10019b950

undefined8 * FUN_10019b950(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = DAT_100890758;
  if (param_1 != 0) {
    FUN_1001e9de0(&DAT_100890710);
    puVar3 = &DAT_100890700;
    do {
      puVar3 = (undefined8 *)*puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        FUN_1001e9eb9(&DAT_100890710);
        puVar3 = (undefined8 *)FUN_1001ed73c(param_1,0);
        if (puVar3 == (undefined8 *)0x0) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            FUN_100698d7a(uVar2);
          }
          FUN_1001782e9(0,0);
          FUN_1001e9de0(&DAT_100890710);
          FUN_1001e9eb9(&DAT_100890710);
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            FUN_100698df0(uVar2);
          }
          FUN_1001782e9(0,0);
          return (undefined8 *)0x0;
        }
        FUN_1001e9de0(&DAT_100890710);
        FUN_10019ed28(&DAT_100890700,&DAT_100890708,puVar3);
        break;
      }
    } while (*(int *)(puVar3 + 4) != param_1);
    FUN_1001e9eb9(&DAT_100890710);
  }
  return puVar3;
}

