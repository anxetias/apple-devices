// rea decompile_all
// name: RPSocket_fd::RPSocket_fd
// address: 0x195fe2
// body: available
// range: 0x195fe2-0x1965c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1965be to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_fd::RPSocket_fd(int, RPSocketMode) */

void __thiscall RPSocket_fd::RPSocket_fd(RPSocket_fd *this,int param_1,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  dispatch_queue_t pdVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  dispatch_object_t object;
  sockaddr *extraout_RDX;
  sockaddr *extraout_RDX_00;
  sockaddr *extraout_RDX_01;
  sockaddr *extraout_RDX_02;
  sockaddr *psVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_stack_fffffffffffff6f8;
  undefined4 uVar11;
  undefined8 in_stack_fffffffffffff700;
  undefined4 uVar12;
  char local_8ec [4];
  socklen_t local_8e8 [2];
  undefined8 local_8e0;
  sockaddr local_8d8;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  char local_858 [1040];
  char local_448 [1040];
  long local_38;
  
  uVar11 = (undefined4)((ulong)in_stack_fffffffffffff6f8 >> 0x20);
  uVar12 = (undefined4)((ulong)in_stack_fffffffffffff700 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  RPSocket::RPSocket((RPSocket *)this);
  *(undefined ***)this = &PTR_read_0044a9f0;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  lVar2 = *(long *)(this + 0x28);
  if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) && (4 < *(int *)(lVar2 + 0x10))) {
    uVar3 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    _LogMsg(5,lVar2,uVar3,0x3eb,"RPSocket_fd",0,&cf_CreatingRPSocket_fd__pforfd__dandmode__d,this,
            CONCAT44(uVar11,param_1),CONCAT44(uVar12,param_3));
  }
  *(int *)(this + 0xf0) = param_1;
  pdVar4 = _dispatch_queue_create("com.apple.PurpleReverseProxy.FDQueue",(dispatch_queue_attr_t)0x0)
  ;
  *(dispatch_queue_t *)(this + 0xf8) = pdVar4;
  pcVar6 = local_8ec;
  local_8ec[0] = '\x01';
  local_8ec[1] = '\0';
  local_8ec[2] = '\0';
  local_8ec[3] = '\0';
  iVar1 = _setsockopt(*(int *)(this + 0xf0),0xffff,0x1022,pcVar6,4);
  if (((iVar1 == -1) &&
      ((lVar2 = *(long *)(this + 0x28), lVar2 != 0 || (lVar2 = _getDefaultLogCtx(), lVar2 != 0))))
     && (2 < *(int *)(lVar2 + 0x10))) {
    uVar3 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    uVar7 = _CFStringCreateWithCString(0,pcVar6,0x8000100);
    pcVar6 = section_000003d8.segname + 9;
    _LogMsg(3,lVar2,uVar3,0x3f1,"RPSocket_fd",uVar7,&cf_setsockoptfor__,*(undefined8 *)(this + 8));
  }
  ___bzero(local_448,0x401);
  ___bzero(local_858,0x401);
  local_8e8[0] = 0x80;
  iVar1 = _getsockname(param_1,(sockaddr *)(this + 0x100),local_8e8);
  psVar8 = extraout_RDX;
  if (iVar1 != 0) {
    auVar9._8_8_ = extraout_RDX;
    auVar9._0_8_ = *(long *)(this + 0x28);
    if (*(long *)(this + 0x28) == 0) {
      auVar9 = _getDefaultLogCtx();
      psVar8 = auVar9._8_8_;
      if (auVar9._0_8_ == 0) goto LAB_00196264;
    }
    psVar8 = auVar9._8_8_;
    if (2 < *(int *)(auVar9._0_8_ + 0x10)) {
      local_8e0 = _baseName(
                           "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                           );
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      uVar3 = _CFStringCreateWithCString(0,pcVar6,0x8000100);
      pcVar6 = (char *)((long)&section_000003d8.addr + 4);
      _LogMsg(3,auVar9._0_8_,local_8e0,0x3fc,"RPSocket_fd",uVar3,&cf_getsocknamefor__,
              *(undefined8 *)(this + 8));
      psVar8 = extraout_RDX_00;
    }
  }
LAB_00196264:
  rps_sockaddr_to_string(local_448,(ulong)(this + 0x100),psVar8,pcVar6);
  if ((param_3 & 0xfffffffe) != 2) goto LAB_00196356;
  local_868 = 0;
  uStack_860 = 0;
  local_878 = 0;
  uStack_870 = 0;
  local_888 = 0;
  uStack_880 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_8b8 = 0;
  uStack_8b0 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_8d8.sa_len = '\0';
  local_8d8.sa_family = '\0';
  local_8d8.sa_data[0] = '\0';
  local_8d8.sa_data[1] = '\0';
  local_8d8.sa_data[2] = '\0';
  local_8d8.sa_data[3] = '\0';
  local_8d8.sa_data[4] = '\0';
  local_8d8.sa_data[5] = '\0';
  local_8d8.sa_data[6] = '\0';
  local_8d8.sa_data[7] = '\0';
  local_8d8.sa_data[8] = '\0';
  local_8d8.sa_data[9] = '\0';
  local_8d8.sa_data[10] = '\0';
  local_8d8.sa_data[0xb] = '\0';
  local_8d8.sa_data[0xc] = '\0';
  local_8d8.sa_data[0xd] = '\0';
  local_8e8[1] = 0x80;
  iVar1 = _getpeername(param_1,&local_8d8,local_8e8 + 1);
  psVar8 = extraout_RDX_01;
  if (iVar1 != 0) {
    auVar10._8_8_ = extraout_RDX_01;
    auVar10._0_8_ = *(long *)(this + 0x28);
    if (*(long *)(this + 0x28) == 0) {
      auVar10 = _getDefaultLogCtx();
      psVar8 = auVar10._8_8_;
      if (auVar10._0_8_ == 0) goto LAB_00196343;
    }
    psVar8 = auVar10._8_8_;
    if (2 < *(int *)(auVar10._0_8_ + 0x10)) {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      uVar7 = _CFStringCreateWithCString(0,pcVar6,0x8000100);
      pcVar6 = (char *)((long)&section_000003d8.size + 6);
      _LogMsg(3,auVar10._0_8_,uVar3,0x406,"RPSocket_fd",uVar7,&cf_getpeernamefor__,
              *(undefined8 *)(this + 8));
      psVar8 = extraout_RDX_02;
    }
  }
LAB_00196343:
  rps_sockaddr_to_string(local_858,(ulong)&local_8d8,psVar8,pcVar6);
LAB_00196356:
  switch(param_3) {
  case 0:
    lVar2 = *(long *)(this + 0x28);
    if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) && (4 < *(int *)(lVar2 + 0x10)))
    {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(5,lVar2,uVar3,0x40e,"RPSocket_fd",0,&cf____withunknownmodewithaddress__s,
              *(undefined8 *)(this + 8),local_448);
    }
    break;
  case 1:
    lVar2 = *(long *)(this + 0x28);
    if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) && (4 < *(int *)(lVar2 + 0x10)))
    {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(5,lVar2,uVar3,0x411,"RPSocket_fd",0,&cf____listeningon_s,*(undefined8 *)(this + 8),
              local_448);
    }
    break;
  case 2:
    lVar2 = *(long *)(this + 0x28);
    if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) && (4 < *(int *)(lVar2 + 0x10)))
    {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(5,lVar2,uVar3,0x414,"RPSocket_fd",0,&cf____accepted_s<__s,*(undefined8 *)(this + 8),
              local_448,local_858);
    }
    break;
  case 3:
    lVar2 = *(long *)(this + 0x28);
    if (((lVar2 != 0) || (lVar2 = _getDefaultLogCtx(), lVar2 != 0)) && (4 < *(int *)(lVar2 + 0x10)))
    {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      _LogMsg(5,lVar2,uVar3,0x417,"RPSocket_fd",0,&cf_____p__connectedto_sas_s,*(long *)(this + 8),
              *(undefined8 *)(*(long *)(this + 8) + 0x10),local_858,local_448);
    }
  }
  _CFRetain(*(undefined8 *)(this + 8));
  object._os_obj =
       (_os_object_s *)
       _dispatch_source_create
                 ((dispatch_source_type_t)PTR___dispatch_source_type_read_004412e0,
                  (long)*(int *)(this + 0xf0),0,(dispatch_queue_t)0x0);
  *(dispatch_object_t *)(this + 0x180) = object;
  _dispatch_set_context(object,this);
  _dispatch_source_set_cancel_handler_f(*(dispatch_source_t *)(this + 0x180),cancel_handler);
  _dispatch_source_set_event_handler_f(*(dispatch_source_t *)(this + 0x180),event_handler);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

