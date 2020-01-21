module View = ReactNative.View;
module Text = ReactNative.Text;
module StyleSheet = ReactNative.StyleSheet;
module Style = ReactNative.Style;
module Platform = ReactNative.Platform;

let styles =
  Style.(
    StyleSheet.create({
      "container":
        style(~flex=1., ~justifyContent=`center, ~alignItems=`center, ()),
      "welcome":
        style(~fontSize=20., ~textAlign=`center, ~margin=dp(10.), ()),
      "instructions": style(~textAlign=`center, ~marginBottom=dp(5.), ()),
    })
  );
[@react.component]
let app = () =>
  <View style=styles##container>
    <Text style=styles##welcome>
      "Welcome to (Reason) React Native!"->React.string
    </Text>
    <Text style=styles##instructions>
      "To get started, edit src/App.re"->React.string
    </Text>
  </View>;