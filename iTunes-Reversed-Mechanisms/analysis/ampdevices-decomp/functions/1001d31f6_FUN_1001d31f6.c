// name: FUN_1001d31f6
// address: 1001d31f6

undefined8 FUN_1001d31f6(undefined4 *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 local_14;
  
  local_14 = (undefined4)((ulong)in_RAX >> 0x20);
  if (((param_2 != 0) && ((char *)*param_3 != (char *)0x0)) &&
     (iVar1 = _sscanf((char *)*param_3,"%d",&local_14), iVar1 == 1)) {
    *param_1 = local_14;
  }
  return 0;
}

