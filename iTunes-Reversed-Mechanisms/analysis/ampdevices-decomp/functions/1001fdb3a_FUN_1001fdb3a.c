// name: FUN_1001fdb3a
// address: 1001fdb3a

void FUN_1001fdb3a(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x3a2) != '\0') {
    uVar1 = FUN_1001eb51b();
    FUN_1005bbb13(*(undefined8 *)(param_1 + 0x7168),&cf_com_apple_iTunes_backup,
                  &cf_LastBackupComputerName,uVar1);
    FUN_1005bbb13(*(undefined8 *)(param_1 + 0x7168),&cf_com_apple_iTunes_backup,
                  &cf_LastBackupComputerType,&cf_Mac);
    FUN_10017060f(uVar1);
    return;
  }
  return;
}

