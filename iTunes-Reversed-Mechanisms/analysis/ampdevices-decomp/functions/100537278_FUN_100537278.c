// name: FUN_100537278
// address: 100537278

undefined8 FUN_100537278(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [20];
  float local_1c;
  
  local_1c = param_1;
  FUN_1001e294c(local_50);
  uVar1 = FUN_1001b8336(local_50);
  uVar2 = (long)local_1c & 0xffffffff;
  FUN_1001bb78a(local_40,"%u%S%03u",uVar2 / 1000,uVar1,
                (int)(long)local_1c + (int)(uVar2 / 1000) * -1000);
  FUN_1001c334a(local_30,0x2328000b);
  FUN_1001bbec4(param_2,local_30,local_40);
  FUN_1001b7a50(local_30);
  FUN_1001b7a50(local_40);
  FUN_1001b7a50(local_50);
  return param_2;
}

