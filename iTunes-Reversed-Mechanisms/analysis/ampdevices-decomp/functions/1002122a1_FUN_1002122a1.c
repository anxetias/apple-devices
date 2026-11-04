// name: FUN_1002122a1
// address: 1002122a1

void FUN_1002122a1(undefined8 param_1,int param_2)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_Erase;
  if (param_2 != 0) {
    pcVar1 = &cf_Update;
  }
  FUN_100171502(param_1,&cf_AuthInstallRestoreBehavior,pcVar1);
  if (param_2 != 0) {
    return;
  }
  FUN_100168b0b(param_1,&cf_CreateFilesystemPartitions,1,1);
  FUN_100168746(param_1,&cf_SystemPartitionSize,0,0);
  return;
}

