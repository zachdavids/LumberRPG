#pragma once

#include <AzCore/Component/Component.h>

#include <LumberRPG/LumberRPGBus.h>

namespace LumberRPG
{
    class LumberRPGSystemComponent
        : public AZ::Component
        , protected LumberRPGRequestBus::Handler
    {
    public:
        AZ_COMPONENT(LumberRPGSystemComponent, "{F76B1C7E-E06C-4C3B-B8F5-9A0C17C8A865}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // LumberRPGRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
