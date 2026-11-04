// name: FUN_1001a44c9
// address: 1001a44c9

void FUN_1001a44c9(ulong param_1,uint param_2,char *param_3)

{
  ushort uVar1;
  ushort local_6c;
  ushort local_6a;
  ushort local_68;
  ushort local_66;
  ushort local_64;
  ushort local_62;
  byte local_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined1 local_5c;
  void *local_50;
  byte local_48;
  undefined2 local_47;
  undefined1 local_45;
  undefined1 local_44;
  void *local_38;
  
  FUN_100177fe6(param_1,&local_6c);
  uVar1 = FUN_1001781cf(param_1 & 0xffffffff,0);
  local_48 = 6;
  local_47 = *(undefined2 *)(&PTR_FUN_10083c560)[(ulong)uVar1 * 2];
  local_45 = *(undefined1 *)((long)(&PTR_FUN_10083c560)[(ulong)uVar1 * 2] + 2);
  local_44 = 0;
  local_60 = 6;
  local_5f = *(undefined2 *)(&PTR_s_Sat_10083c5d0)[(ulong)local_6a * 2];
  local_5d = *(undefined1 *)((long)(&PTR_s_Sat_10083c5d0)[(ulong)local_6a * 2] + 2);
  local_5c = 0;
  _snprintf(param_3,(ulong)param_2,"%s, %02u %s %04u %02u:%02u:%02u GMT",&local_47,(ulong)local_68,
            &local_5f,(ulong)local_6c,(ulong)local_66,(ulong)local_64,(ulong)local_62);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return;
}

