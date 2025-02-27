//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_node_req
//

#include "f_pc/f_pc_node_req.h"
#include "SSystem/SComponent/c_malloc.h"
#include "SSystem/SStandard/s_basic.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_pc/f_pc_base.h"
#include "f_pc/f_pc_create_req.h"
#include "f_pc/f_pc_creator.h"
#include "f_pc/f_pc_deletor.h"
#include "f_pc/f_pc_executor.h"
#include "f_pc/f_pc_layer.h"
#include "f_pc/f_pc_stdcreate_req.h"

//
// Declarations:
//

/* 800227C4-80022804 0040+00 s=1 e=0 z=0  None .text fpcNdRq_RequestQTo__FP19node_create_request
 */
void fpcNdRq_RequestQTo(node_create_request* pNodeCreateReq) {
    fpcLy_CreatedMesg(pNodeCreateReq->mpLayerClass);
    fpcLy_CancelQTo(&pNodeCreateReq->mProcMthCls);
    cTg_SingleCut(&pNodeCreateReq->mCreateTag);
}

/* ############################################################################################## */
/* 803A3A38-803A3A44 000C+00 s=5 e=0 z=0  None .data      l_fpcNdRq_Queue */
static node_list_class l_fpcNdRq_Queue = {NULL, NULL, 0};

/* 80022804-80022850 004C+00 s=1 e=0 z=0  None .text fpcNdRq_ToRequestQ__FP19node_create_request
 */
void fpcNdRq_ToRequestQ(node_create_request* pNodeCreateReq) {
    cTg_Addition(&l_fpcNdRq_Queue, &pNodeCreateReq->mCreateTag);
    fpcLy_ToCancelQ(pNodeCreateReq->mpLayerClass, &pNodeCreateReq->mProcMthCls);
    fpcLy_CreatingMesg(pNodeCreateReq->mpLayerClass);
}

/* 80022850-800228A8 0058+00 s=2 e=0 z=0  None .text
 * fpcNdRq_phase_IsCreated__FP19node_create_request             */
s32 fpcNdRq_phase_IsCreated(node_create_request* pNodeCreateReq) {
    if (fpcCtRq_IsCreatingByID(pNodeCreateReq->mCreatingID) == TRUE) {
        return cPhs_ZERO_e;
    } else {
        return fpcEx_IsExist(pNodeCreateReq->mCreatingID) == TRUE ? 2 : 3;
    }
}

/* 800228A8-80022904 005C+00 s=2 e=0 z=0  None .text fpcNdRq_phase_Create__FP19node_create_request
 */
s32 fpcNdRq_phase_Create(node_create_request* pNodeCreateReq) {
    pNodeCreateReq->mCreatingID =
        fpcSCtRq_Request(pNodeCreateReq->mpLayerClass, pNodeCreateReq->mProcName,
                         (stdCreateFunc)pNodeCreateReq->mpNodeCrReqMthCls->mpPostMethodFunc,
                         pNodeCreateReq, pNodeCreateReq->mpUserData);
    return pNodeCreateReq->mCreatingID == -1 ? 3 : 2;
}

/* 80022904-8002290C 0008+00 s=2 e=0 z=0  None .text
 * fpcNdRq_phase_IsDeleteTiming__FP19node_create_request        */
s32 fpcNdRq_phase_IsDeleteTiming(node_create_request* pNodeCreateReq) {
    return 2;
}

/* 8002290C-8002293C 0030+00 s=2 e=0 z=0  None .text
 * fpcNdRq_phase_IsDeleted__FP19node_create_request             */
s32 fpcNdRq_phase_IsDeleted(node_create_request* pNodeCreateReq) {
    return fpcDt_IsComplete() == 0 ? cPhs_ZERO_e : 2;
}

/* 8002293C-80022990 0054+00 s=2 e=0 z=0  None .text fpcNdRq_phase_Delete__FP19node_create_request
 */
s32 fpcNdRq_phase_Delete(node_create_request* pNodeCreateReq) {
    if (pNodeCreateReq->mNodeProc.mpNodeProc != NULL) {
        if (fpcDt_Delete(&pNodeCreateReq->mNodeProc.mpNodeProc->mBase) == 0) {
            return cPhs_ZERO_e;
        }
        pNodeCreateReq->mNodeProc.mpNodeProc = NULL;
    }
    return 2;
}

/* 80022990-800229D8 0048+00 s=1 e=0 z=0  None .text      fpcNdRq_DoPhase__FP19node_create_request
 */
s32 fpcNdRq_DoPhase(node_create_request* pNodeCreateReq) {
    s32 result =
        cPhs_Handler(&pNodeCreateReq->mReqPhsProc, pNodeCreateReq->mpPhsHandler, pNodeCreateReq);
    if (result == 0x2) {
        return fpcNdRq_DoPhase(pNodeCreateReq);
    }
    return result;
}

/* 800229D8-80022A3C 0064+00 s=0 e=1 z=0  None .text      fpcNdRq_Execute__FP19node_create_request
 */
s32 fpcNdRq_Execute(node_create_request* pNodeCreateReq) {
    s32 result = fpcNdRq_DoPhase(pNodeCreateReq);
    switch (result) {
    case 0:
    case 1:
        return 0;
    case 4:
        return 2;
    case 5:
    case 3:
        return 3;
    default:
        return result;
    }
}

/* 80022A3C-80022AA4 0068+00 s=2 e=1 z=0  None .text      fpcNdRq_Delete__FP19node_create_request */
s32 fpcNdRq_Delete(node_create_request* pNodeCreateReq) {
    fpcNdRq_RequestQTo(pNodeCreateReq);
    if (pNodeCreateReq->mpNodeCrReqMthCls != NULL &&
        pNodeCreateReq->mpNodeCrReqMthCls->mpUnkFunc != NULL &&
        fpcMtd_Method(pNodeCreateReq->mpNodeCrReqMthCls->mpUnkFunc, pNodeCreateReq) == 0) {
        return 0;
    }
    cMl::free(pNodeCreateReq);
    return 1;
}

/* 80022AA4-80022AFC 0058+00 s=2 e=0 z=0  None .text      fpcNdRq_Cancel__FP19node_create_request */
s32 fpcNdRq_Cancel(node_create_request* pNodeCreateReq) {
    if (pNodeCreateReq->mpNodeCrReqMthCls != NULL &&
        fpcMtd_Method(pNodeCreateReq->mpNodeCrReqMthCls->mpCancelFunc, pNodeCreateReq) == 0) {
        return 0;
    }
    return fpcNdRq_Delete(pNodeCreateReq);
}

/* 80022AFC-80022BE4 00E8+00 s=0 e=1 z=0  None .text      fpcNdRq_Handler__Fv */
#define NODE_GET_NEXT(pNode) (pNode ? pNode->mpNextNode : NULL)
s32 fpcNdRq_Handler(void) {
    node_class* currentNode = l_fpcNdRq_Queue.mpHead;
    while (currentNode != NULL) {
        node_create_request* req = ((request_node_class*)currentNode)->mNodeCrReq;
        switch (req->mpNodeCrReqMthCls->mpExecuteFunc(req)) {
        case 3:
        case 5:
            currentNode = NODE_GET_NEXT(currentNode);
            if (fpcNdRq_Cancel(req) == 0) {
                return 0;
            }
            break;
        case 4:
            currentNode = NODE_GET_NEXT(currentNode);
            if (fpcNdRq_Delete(req) == 0) {
                return 0;
            }
            break;
        default:
            currentNode = NODE_GET_NEXT(currentNode);
            break;
        }
    }
    return 1;
}

/* 80022BE4-80022C50 006C+00 s=3 e=0 z=0  None .text
 * fpcNdRq_IsPossibleTarget__FP18process_node_class             */
s32 fpcNdRq_IsPossibleTarget(process_node_class* pProcNode) {
    s32 bsPcId = pProcNode->mBase.mBsPcId;
    request_node_class* currentNode;
    node_create_request* currentNdCr;
    currentNode = (request_node_class*)l_fpcNdRq_Queue.mpHead;
    while (currentNode != NULL) {
        currentNdCr = currentNode->mNodeCrReq;
        if ((currentNdCr->mParameter == 2 || currentNdCr->mParameter == 4 ||
             currentNdCr->mParameter == 1) &&
            currentNdCr->mNodeProc.mProcId == bsPcId) {
            return 0;
        }
        currentNode = (request_node_class*)NODE_GET_NEXT((&currentNode->mBase));
    }
    return 1;
}

/* 80022C50-80022C9C 004C+00 s=2 e=0 z=0  None .text      fpcNdRq_IsIng__FP18process_node_class */
s32 fpcNdRq_IsIng(process_node_class* pProcNode) {
    request_node_class* currentNode;
    node_create_request* currentNodeReq;
    s32 bsPcId = pProcNode->mBase.mBsPcId;
    currentNode = (request_node_class*)l_fpcNdRq_Queue.mpHead;
    while (currentNode != NULL) {
        currentNodeReq = currentNode->mNodeCrReq;
        if (currentNodeReq->mCreatingID == bsPcId) {
            return 1;
        }
        currentNode = (request_node_class*)NODE_GET_NEXT((&currentNode->mBase));
    }
    return 0;
}

/* ############################################################################################## */
/* 803A3A44-803A3AA8 0064+00 s=1 e=0 z=0  None .data      clear$2359 */
static node_create_request clear = {NULL,       NULL,   NULL, NULL,       0,    NULL,       NULL,
                                    NULL,       NULL,   0,    NULL,       NULL, NULL,       0,
                                    0,          NULL,   5,    0xFFFFFFFF, NULL, 0xFFFFFFFE, NULL,
                                    0xFFFFFFFE, 0x7FFF, NULL, 0x7FFF};

/* 80022C9C-80022E14 0178+00 s=3 e=0 z=0  None .text      fpcNdRq_Create__FUl */
node_create_request* fpcNdRq_Create(u32 pRequestSize) {
    node_create_request* req = (node_create_request*)cMl::memalignB(-4, pRequestSize);
    if (req != NULL) {
        static int request_id = 0;
        sBs_ClearArea(req, pRequestSize);
        *req = clear;
        cTg_Create(&req->mCreateTag, req);
        fpcMtdTg_Init(&req->mProcMthCls, (process_method_tag_func)fpcNdRq_Cancel, req);
        req->mRequestId = request_id++;
    }
    return req;
}

/* ############################################################################################## */
/* 803A3AA8-803A3AC0 0018+00 s=1 e=0 z=0  None .data      methods$2376 */
static cPhs__Handler methods_2376[6] = {
    (cPhs__Handler)fpcNdRq_phase_IsDeleteTiming, (cPhs__Handler)fpcNdRq_phase_Delete,
    (cPhs__Handler)fpcNdRq_phase_IsDeleted,      (cPhs__Handler)fpcNdRq_phase_Create,
    (cPhs__Handler)fpcNdRq_phase_IsCreated,      NULL,
};

/* 80022E14-80022EB0 009C+00 s=1 e=0 z=0  None .text
 * fpcNdRq_ChangeNode__FUlP18process_node_classsPv              */
node_create_request* fpcNdRq_ChangeNode(u32 pRequestSize, process_node_class* pProcNode,
                                        s16 param_3, void* param_4) {
    if (fpcNdRq_IsPossibleTarget(pProcNode) == 1 && fpcNdRq_IsIng(pProcNode) == 0) {
        node_create_request* req = fpcNdRq_Create(pRequestSize);
        if (req != NULL) {
            req->mpPhsHandler = methods_2376;
            req->mNodeProc.mpNodeProc = pProcNode;
            req->mNodeProc.mProcId = pProcNode->mBase.mBsPcId;
            req->mpLayerClass = pProcNode->mBase.mLyTg.mpLayer;
            req->mProcName = param_3;
            req->mpUserData = param_4;
        }
        return req;
    } else {
        return NULL;
    }
}

/* ############################################################################################## */
/* 803A3AC0-803A3AD0 0010+00 s=1 e=0 z=0  None .data      methods$2386 */
static cPhs__Handler methods_2386[4] = {
    (cPhs__Handler)fpcNdRq_phase_IsDeleteTiming,
    (cPhs__Handler)fpcNdRq_phase_Delete,
    (cPhs__Handler)fpcNdRq_phase_IsDeleted,
    NULL,
};

/* 80022EB0-80022F3C 008C+00 s=1 e=0 z=0  None .text fpcNdRq_DeleteNode__FUlP18process_node_class
 */
node_create_request* fpcNdRq_DeleteNode(u32 pRequestSize, process_node_class* pProcNode) {
    if (fpcNdRq_IsPossibleTarget(pProcNode) == 1 && fpcNdRq_IsIng(pProcNode) == 0) {
        node_create_request* req = fpcNdRq_Create(pRequestSize);
        if (req != NULL) {
            req->mpPhsHandler = methods_2386;
            req->mNodeProc.mpNodeProc = pProcNode;
            req->mNodeProc.mProcId = pProcNode->mBase.mBsPcId;
            req->mpLayerClass = pProcNode->mBase.mLyTg.mpLayer;
        }
        return req;
    } else {
        return NULL;
    }
}

/* ############################################################################################## */
/* 803A3AD0-803A3AE0 000C+04 s=1 e=0 z=0  None .data      methods$2397 */
static cPhs__Handler methods_2397[3] = {
    (cPhs__Handler)fpcNdRq_phase_Create,
    (cPhs__Handler)fpcNdRq_phase_IsCreated,
    NULL,
};

/* 80022F3C-80022FE8 00AC+00 s=1 e=0 z=0  None .text      fpcNdRq_CreateNode__FUlsPv */
node_create_request* fpcNdRq_CreateNode(u32 pRequestSize, s16 param_2, void* param_3) {
    layer_class* layer = fpcLy_CurrentLayer();
    if (layer->mLayerID != 0 && fpcNdRq_IsPossibleTarget(layer->mpPcNode) == 0) {
        return NULL;
    } else {
        node_create_request* req = fpcNdRq_Create(pRequestSize);
        if (req != NULL) {
            req->mpPhsHandler = methods_2397;
            if (layer->mLayerID != 0) {
                req->mNodeProc.mpNodeProc = layer->mpPcNode;
                req->mNodeProc.mProcId = layer->mpPcNode->mBase.mBsPcId;
            }
            req->mpLayerClass = layer;
            req->mProcName = param_2;
            req->mpUserData = param_3;
        }
        return req;
    }
}

/* 80022FE8-80023098 00B0+00 s=0 e=1 z=0  None .text
 * fpcNdRq_Request__FUliP18process_node_classsPvP32node_create_request_method_class */
node_create_request*
fpcNdRq_Request(u32 param_1, int param_2, process_node_class* param_3, s16 param_4, void* param_5,
                node_create_request_method_class* pNodeCreateRequestMethodClass) {
    node_create_request* req;
    switch (param_2) {
    case 0:
        req = fpcNdRq_CreateNode(param_1, param_4, param_5);
        break;
    case 1:
        req = fpcNdRq_DeleteNode(param_1, param_3);
        break;
    case 2:
        req = fpcNdRq_ChangeNode(param_1, param_3, param_4, param_5);
        break;
    case 4:
        break;
    }
    if (req != NULL) {
        req->mParameter = param_2;
        req->mpNodeCrReqMthCls = pNodeCreateRequestMethodClass;
        fpcNdRq_ToRequestQ(req);
    }
    return req;
}

/* 80023098-80023110 0078+00 s=1 e=0 z=0  None .text      fpcNdRq_ReChangeNode__FUisPv */
s32 fpcNdRq_ReChangeNode(unsigned int pRequestId, s16 param_2, void* param_3) {
    request_node_class* currentNode;
    node_create_request* found;
    currentNode = (request_node_class*)l_fpcNdRq_Queue.mpHead;
    while (currentNode != NULL) {
        found = currentNode->mNodeCrReq;
        if (found->mParameter == 2 && found->mRequestId == pRequestId) {
            if (found->mCreatingID == -2) {
                found->mProcName = param_2;
                found->mpUserData = param_3;
                return 1;
            }
            return 0;
        }
        currentNode = (request_node_class*)NODE_GET_NEXT((&currentNode->mBase));
    }
    return 0;
}

/* 80023110-80023130 0020+00 s=0 e=1 z=0  None .text      fpcNdRq_ReRequest__FUisPv */
s32 fpcNdRq_ReRequest(unsigned int pRequestId, s16 param_2, void* param_3) {
    return fpcNdRq_ReChangeNode(pRequestId, param_2, param_3);
}
